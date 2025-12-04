#include "token.bucket.rate.limiter.hpp"

void TokenBucket::refillTokens(const std::string& userId, std::chrono::steady_clock::time_point now) {
    std::chrono::steady_clock::time_point lastTime = last_refilled[userId];
    auto elapsedTime = std::chrono::duration_cast<std::chrono::seconds>(now-lastTime).count();

    auto refillRate = static_cast<double>(cfg.timeWindowInSeconds/cfg.maxRequest);
    auto token = static_cast<int>(elapsedTime/refillRate);

    if (token > 0) {
        tokens[userId] = std::min(tokens[userId] + token, cfg.maxRequest);
        last_refilled[userId] = now;
    }
}

bool TokenBucket::allowRequest(const std::string& userId) {
    std::lock_guard<std::mutex> lock(mut);

    auto now = std::chrono::steady_clock::now();

    if (tokens.find(userId) == tokens.end()) {
        tokens[userId] = getConfig().maxRequest;
        last_refilled[userId] = now;
    }

    refillTokens(userId, now);

    if (tokens[userId] > 0) {
        tokens[userId]--;
        return true;
    }
    return false;
}

LimiterType TokenBucket::getType() {
    return BUCKET_TOKEN;
}


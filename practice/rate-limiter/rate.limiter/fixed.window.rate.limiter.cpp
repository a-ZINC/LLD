#include "fixed.window.rate.limiter.hpp"

void FixedWindowRateLimiter::refillTokens(const std::string& userId, std::chrono::steady_clock::time_point now) {
    long long nowInSecond = std::chrono::duration_cast<std::chrono::seconds>(now.time_since_epoch()).count();
    if ((nowInSecond - cfg.timeWindowInSeconds) > windowStartTime[userId]) {
        requests[userId] += cfg.maxRequest;
        windowStartTime[userId] = nowInSecond;
    }
}

bool FixedWindowRateLimiter::allowRequest(const std::string& userId) {
    std::lock_guard<std::mutex> lock(mut);
    auto now = std::chrono::steady_clock::now();

    refillTokens(userId, now);

    if (requests[userId] > 0) {
        requests[userId]--;
        return true;
    }

    return false; 
}

LimiterType FixedWindowRateLimiter::getType() {
    return FIXED_WINDOW;
}
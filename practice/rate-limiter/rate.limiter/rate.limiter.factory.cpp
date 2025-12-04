#include "rate.limiter.factory.hpp"

std::unique_ptr<RateLimiter> RateLimiterFactory::createRateLimiter(LimiterType type, RateLimiterConfig& cfg) {
    switch (type) {
        case LimiterType::BUCKET_TOKEN:
            return std::make_unique<TokenBucket>(cfg);
        case LimiterType::FIXED_WINDOW:
            return std::make_unique<FixedWindowRateLimiter>(cfg);
        default:
            return nullptr;
    }
}
#ifndef RATE_LIMITER_FACTORY_HPP
#define RATE_LIMITER_FACTORY_HPP

#include "fixed.window.rate.limiter.hpp"
#include "token.bucket.rate.limiter.hpp"

class RateLimiterFactory {
    public:
        static std::unique_ptr<RateLimiter> createRateLimiter(LimiterType type, RateLimiterConfig& cfg);
};

#endif
#ifndef RATE_LIMITER_HPP
#define RATE_LIMITER_HPP

#include "../rate.limter.config/rate.limiter.config.hpp"
#include "mutex"

enum LimiterType {
    FIXED_WINDOW,
    BUCKET_TOKEN
};

class RateLimiter {
    protected:
        RateLimiterConfig cfg;
        std::mutex mut;
        
    public:
        RateLimiter(RateLimiterConfig c) : cfg(c) {}
        virtual ~RateLimiter() {}
        virtual bool allowRequest(const std::string& userId) = 0;
        virtual LimiterType getType() = 0;
        RateLimiterConfig& getConfig() {
            return cfg;
        }
};

#endif
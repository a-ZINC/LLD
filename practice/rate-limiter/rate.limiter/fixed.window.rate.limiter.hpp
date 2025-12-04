#ifndef FIXED_WINDOW_ARTE_LIMITER_HPP
#define FIXED_WINDOW_ARTE_LIMITER_HPP

#include "rate.limiter.hpp"
#include "map"

class FixedWindowRateLimiter : public RateLimiter {
    private:
        std::unordered_map<std::string, int> requests;
        std::unordered_map<std::string, long long> windowStartTime;

        void refillTokens(const std::string& userId, std::chrono::steady_clock::time_point now);

    public:
        FixedWindowRateLimiter(const RateLimiterConfig& cfg) : RateLimiter(cfg) {}
        bool allowRequest(const std::string& userId);
        LimiterType getType();
        ~FixedWindowRateLimiter() {}
};

#endif
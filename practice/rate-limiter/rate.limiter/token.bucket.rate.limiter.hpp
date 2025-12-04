#ifndef TOKEN_BUCKET_RATE_LIMITER_HPP
# define TOKEN_BUCKET_RATE_LIMITER_HPP

#include "rate.limiter.hpp"
#include "../rate.limter.config/rate.limiter.config.hpp"
#include "map"
#include "chrono"
#include "mutex"

class TokenBucket : public RateLimiter {
    private:
        std::unordered_map<std::string, int> tokens;
        std::unordered_map<std::string, std::chrono::steady_clock::time_point> last_refilled;

        void refillTokens(const std::string& userId, std::chrono::steady_clock::time_point now);
    public:
        TokenBucket(const RateLimiterConfig& cfg) : RateLimiter(cfg) {}
        bool allowRequest(const std::string& userId) override;
        LimiterType getType() override;
        ~TokenBucket() {}
};


#endif
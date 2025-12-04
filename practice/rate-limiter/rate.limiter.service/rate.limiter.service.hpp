#ifndef RATE_LIMITER_SERVICE_HPP
#define RATE_LIMITER_SERVICE_HPP

#include<map>
#include "../user/user.hpp"
#include "../rate.limiter/rate.limiter.hpp"
#include "../rate.limter.config/rate.limiter.config.hpp"
#include "../rate.limiter/rate.limiter.factory.hpp"

class RateLimiterService {
    private:
        std::unordered_map<UserType, std::unique_ptr<RateLimiter>> userLimiterMapping;
    public:
        void RateLimiterStrategy();
        bool allowRequests(User& user);

};

#endif
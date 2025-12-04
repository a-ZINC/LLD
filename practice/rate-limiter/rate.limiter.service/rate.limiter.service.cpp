#include "rate.limiter.service.hpp"

void RateLimiterService::RateLimiterStrategy() {
    RateLimiterConfig fixedConfig(10, 60);
    userLimiterMapping[UserType::FREE] = RateLimiterFactory::createRateLimiter(LimiterType::FIXED_WINDOW, fixedConfig);

    RateLimiterConfig tokenConfig(100, 60);
    userLimiterMapping[UserType::PREMIUM] = RateLimiterFactory::createRateLimiter(LimiterType::BUCKET_TOKEN, tokenConfig);
}

bool RateLimiterService::allowRequests(User& user) {
    std::string userId = std::to_string(user.getId());
    UserType userType = user.getType();

    auto rateLimiter = userLimiterMapping[userType].get();
    return rateLimiter->allowRequest(userId);
}
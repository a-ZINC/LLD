#include "rate.limiter.service/rate.limiter.service.hpp"
#include <iostream>

int main() {
    RateLimiterService rateLimiterService;
    rateLimiterService.RateLimiterStrategy();

    User user(1, "John Doe", UserType::FREE);
    for (int i = 0; i < 12; ++i) {
        bool allowed = rateLimiterService.allowRequests(user);
        std::cout << "Request " << i << ": " 
                  << (allowed ? "✓ ALLOWED" : "✗ BLOCKED") << std::endl;
    }
    User premiumUser(2, "Jane Doe", UserType::PREMIUM);
    for (int i = 0; i < 105; ++i) {
        bool allowed = rateLimiterService.allowRequests(premiumUser);
        std::cout << "Request " << i << ": " 
                  << (allowed ? "✓ ALLOWED" : "✗ BLOCKED") << std::endl;
    }

    return 0;
}
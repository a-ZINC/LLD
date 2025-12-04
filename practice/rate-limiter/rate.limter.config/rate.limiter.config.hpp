#ifndef RATE_LIMITER_CONFIG_HPP
#define RATE_LIMITER_CONFIG_HPP

class RateLimiterConfig {
    public:
        int maxRequest;
        int timeWindowInSeconds;

        RateLimiterConfig(int r, int t) : maxRequest(r), timeWindowInSeconds(t) {}
};

#endif
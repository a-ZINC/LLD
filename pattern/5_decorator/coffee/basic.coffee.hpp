#ifndef BASIC_COFFEE_HPP
#define BASIC_COFFEE_HPP

#include "coffee.hpp"

class BasicCoffee : public Coffee {
    public:
        double cost() override {
            return 5.0;
        }

        std::string description() override {
            return "Basic Coffee";
        }
};

#endif
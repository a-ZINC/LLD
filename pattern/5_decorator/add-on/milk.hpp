#ifndef MILK_HPP
#define MILK_HPP

#include "addon.hpp"

class Milk : public AddonDecorator {
    public:
        Milk(Coffee* c) : AddonDecorator(c) {}

        double cost() override;

        std::string description() override;
};

#endif
#ifndef ADDON_HPP
#define ADDON_HPP

#include "../coffee/coffee.hpp"

class AddonDecorator: public Coffee {
    protected:
        Coffee* coffee;

    public:
        AddonDecorator(Coffee* c) : coffee(c) {}
        virtual ~AddonDecorator() {
            delete coffee;
        };
};

#endif
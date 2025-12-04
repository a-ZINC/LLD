#ifndef COFFEE_HPP
#define COFFEE_HPP

#include <iostream>
#include <string>

class Coffee {
    public:
        virtual double cost() = 0;
        virtual std::string description() = 0;
        virtual ~Coffee() {};
};

#endif
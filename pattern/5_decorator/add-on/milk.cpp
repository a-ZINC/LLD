#include "milk.hpp"

double Milk::cost() {
    return coffee->cost() + 1.5;
}

std::string Milk::description() {
    return coffee->description() + ", Milk";
}
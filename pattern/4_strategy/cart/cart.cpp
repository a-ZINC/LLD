#include "cart.hpp"

void CART::setPaymentStrategy(Payment* p) {
    if (p != nullptr) {
        paymentInstance = p;
    }
}

void CART::addItems(double amnt) {
    if (amnt > 0) {
        amount += amnt;
    }
}

void CART::checkout() {
    if (paymentInstance != nullptr) {
        paymentInstance->pay(amount);
    }
}
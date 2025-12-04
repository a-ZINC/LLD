#ifndef CART_HPP
#define CART_HPP

#include "../payment/payment.hpp"
#include <iostream>

class CART {
    private:
        Payment* paymentInstance = nullptr;
        double amount;
    
    public:
        void setPaymentStrategy(Payment* pi);
        void addItems(double a);
        void checkout();
};

#endif
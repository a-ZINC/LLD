#ifndef PAYMENT_HPP
#define PAYMENT_HPP

#include <iostream>

enum PaymentType {
    UPI,
    CREDIT_CARD
};

class Payment {
    public:
        virtual void pay(double amount) = 0;
        virtual PaymentType getPaymentType() = 0;
        virtual ~Payment() {};
};

#endif
#ifndef CREDIT_CARD_PAYMENT_HPP
#define CREDIT_CARD_PAYMENT_HPP

#include "payment.hpp"

class CreditCardPayment : public Payment {
    public:
        void pay(double amount) override;
        PaymentType getPaymentType() override;
};

#endif
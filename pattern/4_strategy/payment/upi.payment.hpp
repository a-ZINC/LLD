#ifndef UPI_PAYMENT_HPP
#define UPI_PAYMENT_HPP

#include "payment.hpp"

class UPIPayment : public Payment {
    public:
        void pay(double amount) override;
        PaymentType getPaymentType() override;
};

#endif
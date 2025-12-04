#include "credit.card.payment.hpp"

void CreditCardPayment::pay(double amount) {
    std::cout<< "paying using credit card"<< amount << std::endl;
};

PaymentType CreditCardPayment::getPaymentType() {
    return CREDIT_CARD;
};
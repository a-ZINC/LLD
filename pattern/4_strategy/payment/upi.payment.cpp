#include "upi.payment.hpp"

void UPIPayment::pay(double amount) {
    std::cout<< "paying using upi" << amount << std::endl;
};

PaymentType UPIPayment:: getPaymentType() {
    return UPI;
};
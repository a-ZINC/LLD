#include "./cart/cart.hpp"
#include "./payment/upi.payment.hpp"
#include "./payment/credit.card.payment.hpp"

int main() {
    CART c;

    c.addItems(100.00);
    c.addItems(2);

    c.setPaymentStrategy(new UPIPayment());
    c.checkout();

    c.setPaymentStrategy(new CreditCardPayment());
    c.addItems(50);
    c.checkout();
}
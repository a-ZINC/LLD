#include<iostream>
#include "account.cpp"

int main() {
    std::cout << "Bruhh Lets create some bitches" << std::endl;

    BankAccount acc1;
    BankAccount acc2("ajinkya", "0000");
    BankAccount acc3("ajinkya", "1111", 400);

    acc1.deposit(100).displayAccountInfo();
    acc1.withdraw(200).displayAccountInfo();

    acc2.displayAccountInfo();
    acc2.deposit(100).displayAccountInfo();
    acc2.withdraw(200).displayAccountInfo();

    acc3.displayAccountInfo();
    acc3.deposit(100).displayAccountInfo();
    acc3.withdraw(200).displayAccountInfo();

    return 0;
}
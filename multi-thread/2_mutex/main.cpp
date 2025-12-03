#include<iostream>
#include<thread>
#include "bank.cpp"

int main() {
    BankAccount account(0);

    for (int i=0; i<10; i++) {
        std::thread t1([&account]() {
            for (int i = 0; i < 100; ++i) {
                account.safe_deposit(10);
            }
        });

        std::thread t2([&account]() {
            for (int i = 0; i < 100; ++i) {
                account.safe_deposit(10);
            }
        });
        t1.join(); t2.join();
        account.print_balance(); // Unsafe print
        account.safe_print_balance(); // Safe print

        std::thread t3([&account]() {
            for (int i = 0; i < 100; ++i) {
                account.safe_withdraw(10);
            }
        });

        std::thread t4([&account]() {
            for (int i = 0; i < 100; ++i) {
                account.safe_withdraw(10);
            }
        });
        t3.join(); t4.join();
        account.print_balance(); // Unsafe print
        account.safe_print_balance(); // Safe print
    }
}
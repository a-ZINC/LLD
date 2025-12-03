#include<iostream>
#include<thread>
#include<mutex>


class BankAccount {
    private:
        double balance;
        std::mutex mux;

    public:
        BankAccount(double init_balance) : balance(init_balance) {}

        void deposit(double amount) {
            this->balance += amount;
            return;
        }

        void safe_deposit(double amount) {
            std::lock_guard<std::mutex> lock(this->mux);
            this->balance += amount;
            return;
        }

        void withdraw(double amount) {
            this->balance -= amount;
            return;
        }

        void safe_withdraw(double amount) {
            std::lock_guard<std::mutex> lock(this->mux);
            this->balance -= amount;
            return;
        }

        void print_balance() {
            std::cout << "Current balance: " << this->balance << std::endl;
            return;
        }

        void safe_print_balance() {
            std::lock_guard<std::mutex> lock(this->mux);
            std::cout << "Current balance: " << this->balance << std::endl;
            return;
        }

};
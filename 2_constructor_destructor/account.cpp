#include<string>
#include<iostream>


class BankAccount {
    private:
        std::string accountHolderName;
        std::string accountNumber;
        double balance;
    public:

        BankAccount() : accountHolderName("N/A"), accountNumber("0000000000"), balance(0.0) {
            std::cout << "Default constructor called. Account created with default values." << std::endl;
        }

        BankAccount(std::string name, std::string number) {
            this->accountHolderName = name;
            this->accountNumber = number;
            this->balance = 0.0;
            std::cout << "Parameterized constructor called. Account created for " << name << "." << std::endl;
        }

        BankAccount(std::string name, std::string number, double initialBalance) {
            this->accountHolderName = name;
            this->accountNumber = number;
            this->balance = initialBalance;
            std::cout << "Parameterized constructor called. Account created for " << name << " with initial balance of " << initialBalance << "." << std::endl;
        }

        ~BankAccount() {
            std::cout << "Destructor called. Account for " << accountHolderName << " is being deleted." << std::endl;
        }

        void displayAccountInfo() {
            std::cout << "Account Holder: " << accountHolderName << std::endl;
            std::cout << "Account Number: " << accountNumber << std::endl;
            std::cout << "Balance: $" << balance << std::endl;
        }

        BankAccount& withdraw(double amount) {
            if (this->balance <= amount) {
                this->balance = 0;
            } else {
                this->balance -= amount;
            }
            return *this;
        }

        BankAccount& deposit(double amount) {
            this->balance += amount;
            return *this;
        }
};
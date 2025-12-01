#include<iostream>
#include<string>


class Employee {
    protected:
        std::string name;
        int id;
        double salary;

    public:
        Employee(std::string n, int id, double s) : name(n), id(id), salary(s) {}

        virtual double calculateSalary() {
            return this->salary;
        }

        virtual void display() {
            std::cout<< "Name: " << this->name << ", Id: " << this->id << ", Salary: " << this->salary << std::endl;
        }

        virtual ~Employee() {
            std::cout << "bro go to hell!" << std::endl;
        }
};
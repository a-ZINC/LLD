#include "employee.h"

Employee::Employee(std::string n, int id, double s)
    : name(n), id(id), salary(s) {}

double Employee::calculateSalary() {
    return this->salary;
}

void Employee::display() {
    std::cout << "Name: " << this->name
              << ", Id: " << this->id
              << ", Salary: " << this->salary << std::endl;
}

Employee::~Employee() {
    std::cout << "bro go to hell!" << std::endl;
}

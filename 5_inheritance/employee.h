#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<string>
#include<iostream>

class Employee {
    protected:
        std::string name;
        int id;
        double salary;
    public:
        Employee(std::string n, int id, double s);
        virtual double calculateSalary();
        virtual void display();
        virtual ~Employee();
};

#endif
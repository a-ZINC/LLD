#ifndef MANAGER_H
#define MANAGER_H

#include<iostream>
#include "employee.h"

class Manager : virtual protected Employee {
    private:
        int teamSize;
        double bonus;

    public:
        Manager(int pro, std::string name, double sal, int id, int ts, double bonus);

        double calculateSalary();

        void display();

};
#endif
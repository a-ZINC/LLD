#include<iostream>
#include "employee.cpp"

class Manager : virtual private Employee {
    private:
        int teamSize;
        double bonus;

    public:
        Manager(int pro, std::string name, double sal, int id, int ts, double bonus) : 
        Employee(name, id, sal), teamSize(ts), bonus(bonus) {}

        

}
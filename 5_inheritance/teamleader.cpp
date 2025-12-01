#include<iostream>
#include "manager.h"

class TeamLeader : public Manager {
    private:
        int leadershipscore;

    public:
        TeamLeader(int ls, int pro, std::string name, double sal, int id, int ts, double bonus, std::vector<std::string> pl) :
        Employee(name, id, sal), Manager(pro, name, sal, id, ts, bonus), leadershipscore(ls) {}

        double calculateSalary() {
            return Manager::calculateSalary()  + (10 * this->leadershipscore);
        }

        void display() {
            Manager::display();
            std::cout<< "leadership score: " << this->leadershipscore << std::endl;
        }
};
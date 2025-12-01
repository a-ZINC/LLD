#include "manager.h"

        Manager::Manager(int pro, std::string name, double sal, int id, int ts, double bonus) : 
        Employee::Employee(name, id, sal), teamSize(ts), bonus(bonus) {}

        double Manager::calculateSalary() {
            return this->salary + (20 * this->teamSize) + this->bonus;
        }

        void Manager::display() {
            Employee::display();
            std::cout<< "team size: " << this->teamSize << std::endl;
            std::cout<< "bonus: " << this->bonus << std::endl;
        }
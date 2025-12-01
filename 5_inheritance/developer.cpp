#include<iostream>
#include "employee.cpp"
#include<vector>
#include<string>


class Developer : virtual private Employee {
    private:
        std::vector<std::string> programmingLanguages;
        int numOfProject;

    public:
        Developer(std::vector<std::string> pl, int pro, std::string name, double sal, int id) :
        Employee(name, id, sal), programmingLanguages(pl), numOfProject(pro) {}

        double calculateSalary() override {
            return this->salary + (50 * this->numOfProject);
        }

        void display() {
            Employee::display();
            std::cout<< "num of project: " << this->numOfProject << std::endl;
            std::cout<< "languages: ";
            for (int i=0; i<programmingLanguages.size(); i++) {
                std::cout<< programmingLanguages[i];
            }
            std::cout<< std::endl;
        }

};
#include<iostream>
#include "teamleader.cpp"


int main() {
    std::vector<std::string> langs = {"C++", "Python", "Java"};
    TeamLeader tl(9, 5, "Ajinkya", 5000, 101, 15, 2000, langs);
    
    tl.display();
    std::cout<< "Total Salary: " << tl.calculateSalary() << std::endl;

    return 0;
}
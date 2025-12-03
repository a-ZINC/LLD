#include<iostream>
#include "logger.h"

int main() {
    std::cout << "Singleton Pattern Example in C++14" << std::endl;


    Logger* logger1 = Logger::getInstance();
    Logger* logger2 = Logger::getInstance();
    logger1->log("This is the first log message.");
    logger2->log("This is the second log message.");
    

    return 0;
}
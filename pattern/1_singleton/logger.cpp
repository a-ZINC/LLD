#include "logger.h"
#include <fstream>


Logger* Logger::instance = nullptr;

Logger::Logger() {
    std::cout<< "Logger initialized." << std::endl;
}

void Logger::log(const std::string &message) {
    std::cout << "Log: " << message << std::endl;
    std::ofstream logFile("log.txt", std::ios::app);
    if (logFile.is_open()) {
        logFile << message << std::endl;
        logFile.close();
    }
}

Logger* Logger::getInstance() {
    if (instance == nullptr) {
        instance = new Logger();
    }
    return instance;
}
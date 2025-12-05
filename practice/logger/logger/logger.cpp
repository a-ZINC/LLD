#include "logger.hpp"

Logger* Logger::getInstance() {
    if (instance == nullptr) {
        instance = new Logger();
    }
    return instance;
}

void Logger::logInfo(const std::string& message) {
    Log* log = logFactory->createLog(LogType::INFO);
    if (log) {
        std::time_t now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
        LogMessage logMessage(message, LogType::INFO, now);
        log->logMessage(logMessage);
        delete log;
    }
}

void Logger::logWarning(const std::string& message) {
    Log* log = logFactory->createLog(LogType::WARNING);
    if (log) {
        std::time_t now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
        LogMessage logMessage(message, LogType::WARNING, now);
        log->logMessage(logMessage);
        delete log;
    }
}

void Logger::logError(const std::string& message) {
    Log* log = logFactory->createLog(LogType::ERROR);
    if (log) {
        std::time_t now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
        LogMessage logMessage(message, LogType::ERROR, now);
        log->logMessage(logMessage);
        delete log;
    }
}

void Logger::logDebug(const std::string& message) {
    Log* log = logFactory->createLog(LogType::DEBUG);
    if (log) {
        std::time_t now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
        LogMessage logMessage(message, LogType::DEBUG, now);
        log->logMessage(logMessage);
        delete log;
    }
}

Logger* Logger::instance = nullptr;



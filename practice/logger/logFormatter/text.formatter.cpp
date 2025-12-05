#include "text.formatter.hpp"

std::string TextFormatter::typeTostring(LogType type) {
    switch (type) {
        case LogType::DEBUG:
            return "DEBUG";
        case LogType::INFO:
            return "INFO";
        case LogType::WARNING:
            return "WARNING";
        case LogType::ERROR:
            return "ERROR";
        default:
            return "UNKNOWN";
    }
}

std::string TextFormatter::format(const LogMessage& logMessage) {
        std::stringstream ss;
        std::time_t timestamp = logMessage.getTimestamp();
        ss << std::ctime(&timestamp);
        ss.seekp(-1, ss.cur);
        ss << "[" << typeTostring(logMessage.getType()) << "] ";
        ss << logMessage.getMessage();
        return ss.str();
}
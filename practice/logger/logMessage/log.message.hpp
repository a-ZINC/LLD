#ifndef LOG_MESSAGE_HPP
#define LOG_MESSAGE_HPP

#include <string>
#include "../logType/log.type.hpp"

class LogMessage {
    private:
        std::string message;
        LogType type;
        std::time_t timestamp;
    public:
        LogMessage(std::string msg, LogType t, std::time_t ts) : message(msg), type(t), timestamp(ts) {}
        LogType getType() const {
            return type;
        }
        std::string getMessage() const {
            return message;
        }
        std::time_t getTimestamp() const {
            return timestamp;
        }
};
#endif
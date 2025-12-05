#ifndef LOG_HPP
#define LOG_HPP

#include "../logAppender/log.appender.hpp"
#include "./log.type.hpp"
#include <vector>

class Log {
    protected:
        std::vector<LogAppender*> appenders;
        LogType type;
    public:
        void addAppender(LogAppender* appender);
        void logMessage(const LogMessage& logMessage);
        virtual ~Log() {}
};

#endif
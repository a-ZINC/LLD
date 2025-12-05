#ifndef LOG_APPENDER_HPP
#define LOG_APPENDER_HPP

#include "../logFormatter/log.formatter.hpp"

class LogAppender {
    protected:
        LogFormatter* formatter;
    public:
        LogAppender(LogFormatter* fmt = nullptr) : formatter(fmt) {}
        virtual void output(const LogMessage& logMessage) = 0;
        virtual bool setFormatter(LogFormatter* fmt) = 0;
        virtual ~LogAppender() {}
};

#endif
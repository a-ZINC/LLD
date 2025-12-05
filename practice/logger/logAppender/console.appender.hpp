#ifndef CONSOLE_APPENDER_HPP
#define CONSOLE_APPENDER_HPP

#include "log.appender.hpp"
#include <iostream>

class ConsoleAppender : public LogAppender {
    public:
        ConsoleAppender(LogFormatter* fmt = nullptr) : LogAppender(fmt) {}
        void output(const LogMessage& logMessage) override;
        bool setFormatter(LogFormatter* fmt) override;
        virtual ~ConsoleAppender() {}
};

#endif
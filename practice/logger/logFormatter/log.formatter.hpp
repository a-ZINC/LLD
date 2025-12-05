#ifndef LOG_FORMATTER_HPP
#define LOG_FORMATTER_HPP

#include "../logMessage/log.message.hpp"


class LogFormatter {
    public:
        virtual std::string format(const LogMessage& logMessage) = 0;
        virtual ~LogFormatter() {}
};

#endif
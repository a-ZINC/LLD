#ifndef ERROR_LOG_HPP
#define ERROR_LOG_HPP

#include "log.hpp"

class ErrorLog : public Log {
    public:
        ErrorLog() {
            type = LogType::ERROR;
        }
        virtual ~ErrorLog() {}
};

#endif
#ifndef INFO_LOG_HPP
#define INFO_LOG_HPP

#include "log.hpp"

class InfoLog : public Log {
    public:
        InfoLog() {
            type = LogType::INFO;
        }
        virtual ~InfoLog() {}
};

#endif
#ifndef WARN_LOG_HPP
#define WARN_LOG_HPP

#include "log.hpp"

class WarnLog : public Log {
    public:
        WarnLog() {
            type = LogType::WARNING;
        }
        virtual ~WarnLog() {}
};

#endif
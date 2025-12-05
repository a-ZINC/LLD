#ifndef DEBUG_LOG_HPP
#define DEBUG_LOG_HPP

#include "log.hpp"

class DebugLog : public Log {
    public:
        DebugLog() {
            type = LogType::DEBUG;
        }
        virtual ~DebugLog() {}
};

#endif
#ifndef LOG_FACTORY_HPP
#define LOG_FACTORY_HPP

#include "log.hpp"
#include "info.log.hpp"
#include "warn.log.hpp"
#include "error.log.hpp"
#include "debug.log.hpp"
#include <unordered_map>

class LogFactory {
    public:
        static std::unordered_map<LogType, Log*> logMap;
    public:
        static Log* createLog(LogType type) {
            switch (type) {
                case LogType::INFO:
                    return logMap[type];
                case LogType::WARNING:
                    return logMap[type];
                case LogType::ERROR:
                    return logMap[type];
                case LogType::DEBUG:
                    return logMap[type];
                default:
                    return nullptr;
            }
        }
};

#endif
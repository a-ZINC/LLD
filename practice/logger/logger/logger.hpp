#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <string>
#include "../logType/log.factory.hpp"

class Logger {
    private:
        static Logger* instance;
        LogFactory* logFactory;

        Logger(){};
    public:
        Logger(const Logger&) = delete;
        Logger& operator=(const Logger&) = delete;

        static Logger* getInstance();
        void logInfo(const std::string& message);
        void logWarning(const std::string& message);
        void logError(const std::string& message);
        void logDebug(const std::string& message);
        virtual ~Logger() {};
};

#endif
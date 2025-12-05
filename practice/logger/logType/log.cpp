#include "log.hpp"

void Log::addAppender(LogAppender* appender) {
    appenders.push_back(appender);
};

void Log::logMessage(const LogMessage& msg) {
    for (auto appender : appenders) {
        appender->output(msg);
    }
};
#include "./logger/logger.hpp"
#include "./logFormatter/text.formatter.hpp"
#include "./logAppender/console.appender.hpp"
#include "./logAppender/file.appender.hpp"
#include "./logType/log.factory.hpp"

int main() {
    Logger* logg = Logger::getInstance();
    TextFormatter* formatter = new TextFormatter();
    ConsoleAppender* consoleAppender = new ConsoleAppender();
    FileAppender* fileAppender = new FileAppender("log.txt", nullptr);
    FileAppender* fileAppender2 = new FileAppender("error.txt", nullptr);
    consoleAppender->setFormatter(formatter);
    fileAppender->setFormatter(formatter);
    fileAppender2->setFormatter(formatter);

    LogFactory::logMap[LogType::INFO] = new InfoLog();
    LogFactory::logMap[LogType::WARNING] = new WarnLog();
    LogFactory::logMap[LogType::ERROR] = new ErrorLog();
    LogFactory::logMap[LogType::DEBUG] = new DebugLog();

    for (auto& pair : LogFactory::logMap) {
        pair.second->addAppender(consoleAppender);
        pair.second->addAppender(fileAppender);
    }
    LogFactory::logMap[LogType::ERROR]->addAppender(fileAppender2);



    logg->logInfo("This is an info message.");
    logg->logWarning("This is a warning message.");
    logg->logError("This is an error message.");
    logg->logDebug("This is a debug message.");

    delete formatter;
    delete consoleAppender;
    delete fileAppender;
    return 0;
}


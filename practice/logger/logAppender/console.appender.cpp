#include "console.appender.hpp"

void ConsoleAppender::output(const LogMessage& logMessage) {
    if (formatter != nullptr) {
        std::string formattedMessage = formatter->format(logMessage);
        std::cout << formattedMessage << std::endl;
    } else {
        std::cout << logMessage.getMessage() << std::endl;
    }
}

bool ConsoleAppender::setFormatter(LogFormatter* fmt) {
    if (fmt != nullptr) {
        formatter = fmt;
        return true;
    }
    return false;
}



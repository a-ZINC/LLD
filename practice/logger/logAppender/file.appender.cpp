#include "file.appender.hpp"

FileAppender::FileAppender(const std::string& file, LogFormatter* fmt) : LogAppender(fmt), filename(file) {
    fileStream.open(filename, std::ios::app);
}

void FileAppender::output(const LogMessage& logMessage) {
    std::lock_guard<std::mutex> lock(mtx);
    if (fileStream.is_open()) {
        if (formatter != nullptr) {
            std::string formattedMessage = formatter->format(logMessage);
            fileStream << formattedMessage << std::endl;
        } else {
            fileStream << logMessage.getMessage() << std::endl;
        }
    }
}

bool FileAppender::setFormatter(LogFormatter* fmt) {
    if (fmt != nullptr) {
        formatter = fmt;
        return true;
    }
    return false;
}

FileAppender::~FileAppender() {
    if (fileStream.is_open()) {
        fileStream.close();
    }
}
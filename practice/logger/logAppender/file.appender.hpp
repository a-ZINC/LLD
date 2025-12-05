#ifndef FILE_APPENDER_HPP
#define FILE_APPENDER_HPP

#include "log.appender.hpp"
#include <string>
#include <fstream>
#include <mutex>

class FileAppender : public LogAppender {
    private:
        std::string filename;
        std::mutex mtx;
        std::ofstream fileStream;
    public:
        FileAppender(const std::string& file, LogFormatter* fmt = nullptr);

        void output(const LogMessage& logMessage) override;
        bool setFormatter(LogFormatter* fmt) override;
        virtual ~FileAppender();
};

#endif
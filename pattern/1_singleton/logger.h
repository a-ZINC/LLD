#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>

class Logger {
    private:
        static Logger* instance;
        Logger();

    public:
        Logger(const Logger&) = delete;
        Logger& operator=(const Logger&) = delete;
        static Logger* getInstance();
        void log(const std::string &message);

};


#endif
#ifndef TEXT_FORMATTER_HPP
#define TEXT_FORMATTER_HPP

#include "log.formatter.hpp"
#include <chrono>
#include <sstream>

class TextFormatter : public LogFormatter {
    public:
        std::string format(const LogMessage& logMessage) override;
        virtual ~TextFormatter() {}
        std::string typeTostring(LogType type);
};


#endif
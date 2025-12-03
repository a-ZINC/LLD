#ifndef DISPLAY_HPP
#define DISPLAY_HPP

#include <string>

class Display {
    public:
        virtual void Show(std::string &message) = 0;
        virtual ~Display() {}
};

#endif
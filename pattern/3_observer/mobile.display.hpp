#ifndef MOBILE_DISPLAY_HPP
#define MOBILE_DISPLAY_HPP

#include "display.hpp"
#include <iostream>

class MobileDisplay : public Display {
    public:
    void Show(std::string &message) override;
    ~MobileDisplay() override {
        std::cout << "MobileDisplay Destructor Called" << std::endl;
    }
};

#endif
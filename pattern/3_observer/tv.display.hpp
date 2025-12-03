#ifndef TV_DISPLAY_HPP
#define TV_DISPLAY_HPP

#include "display.hpp"
#include <iostream>

class TVDispaly : public Display {
    public:
        void Show(std::string &message) override;
        ~TVDispaly() override {
            std::cout << "TVDispaly Destructor Called" << std::endl;
        }
};

#endif
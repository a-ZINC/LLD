#ifndef STATION_HPP
#define STATION_HPP


#include "display.hpp"
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <iostream>


class Station {
    private:
        std::map<Display*, int> displays;
    public:
        void Register(Display* display);
        void Unregister(Display* display);
        void Notify(std::string &message);
};

#endif
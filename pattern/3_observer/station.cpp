#include "station.hpp"

void Station::Register(Display* display) {
    std::cout << "Registering display." << display << std::endl; 
    displays[display] = 1;
}

void Station::Unregister(Display* display) {
    std::cout << "Unregistering display." << display << std::endl;
    for (auto it = displays.begin(); it != displays.end(); ++it) {
        if (it->first == display) {
            displays.erase(it);
            break;
        }
    }
}

void Station::Notify(std::string &message) {
    for (auto& display : displays) {
        std::cout << "Notifying display." << display.first << std::endl;
        display.first->Show(message);
    }
}
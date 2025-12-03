#include "station.hpp"
#include "tv.display.hpp"
#include "mobile.display.hpp"


int main () {
    Station station;

    Display* tvDisplay = new TVDispaly();
    Display* mobileDisplay = new MobileDisplay();

    station.Register(tvDisplay);
    station.Register(mobileDisplay);

    std::string message1 = "Breaking News: Observer Pattern Implemented!";
    station.Notify(message1);

    station.Unregister(tvDisplay);

    std::string message2 = "Update: TV Display Unregistered.";
    station.Notify(message2);

    delete tvDisplay;
    delete mobileDisplay;

    return 0;
}
#include "push.notification.hpp"
#include <iostream>

void PushNotification::send() {
    std::cout << "Sending Push Notification" << std::endl;
}

PushNotification::~PushNotification() {
    std::cout << "PushNotification Destructor Called" << std::endl;
}
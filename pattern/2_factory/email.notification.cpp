#include "email.notification.hpp"
#include <iostream>

void EmailNotification::send() {
    std::cout << "Sending Email Notification" << std::endl;
}

EmailNotification::~EmailNotification() {
    std::cout << "EmailNotification Destructor Called" << std::endl;
}
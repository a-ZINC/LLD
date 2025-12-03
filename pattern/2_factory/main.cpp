#include<iostream>
#include "notification.factory.hpp"

int main() {
    std::cout << "Singleton Pattern Example in C++14" << std::endl;
    Notification* emailNotif = NotificationFactory::createNotification(NotificationFactory::NotificationType::PUSH);
    if (emailNotif != nullptr) {
        emailNotif->send();
    }
    delete emailNotif;
    return 0;
}
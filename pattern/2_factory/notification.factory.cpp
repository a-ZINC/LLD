#include "notification.factory.hpp"

Notification* NotificationFactory::createNotification(NotificationType type) {
    switch (type) {
        case EMAIL:
            return new EmailNotification();
        case PUSH:
            return new PushNotification();
        default:
            return nullptr;
    }
}
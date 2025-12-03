#ifndef NOTIFICATION_FACTORY_HPP
#define NOTIFICATION_FACTORY_HPP

#include "notification.hpp"
#include "email.notification.hpp"
#include "push.notification.hpp"

class NotificationFactory {
    public:
        enum NotificationType {
            EMAIL,
            PUSH
        };

        static Notification* createNotification(NotificationType type);
};

#endif
#ifndef PUSH_NOTIFICATION_HPP
#define PUSH_NOTIFICATION_HPP

#include "notification.hpp"

class PushNotification : public Notification {
    public:
        void send() override;
        ~PushNotification() override;
};

#endif
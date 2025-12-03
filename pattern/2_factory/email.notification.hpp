#ifndef EMAIL_NOTIFICATION_HPP
#define EMAIL_NOTIFICATION_HPP

#include "notification.hpp"

class EmailNotification : public Notification {
    public:
        void send() override;
        ~EmailNotification() override;
};

#endif
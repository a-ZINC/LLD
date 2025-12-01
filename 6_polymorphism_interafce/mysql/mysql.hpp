#ifndef MYSQL_HPP
#define MYSQL_HPP

#include "../db/db.hpp"
#include <iostream>
#include <string>

class MYSQL: public DB {
    private:
        std::string host;
        bool connected;
    public:
        MYSQL(std::string host, bool connected);

        bool Connect() override;
        bool Disconnect() override;
        bool executeQuery(const char* query) override;
        ~MYSQL();
};


#endif
#ifndef POSTGRESQL_HPP
#define POSTGRESQL_HPP

#include "../db/db.hpp"
#include <iostream>
#include <string>


class POSTGRESQL: public DB {
    private:
        std::string host;
        bool connected;
    public:
        POSTGRESQL(std::string host, bool connected);
        ~POSTGRESQL();

        bool Connect() override;
        bool Disconnect() override;
        bool executeQuery(const char* query) override;
};

#endif
#include "mysql.hpp"


MYSQL::MYSQL(std::string host, bool connected) : host(host), connected(false) {}
MYSQL::~MYSQL() {
    std::cout << "MySQL destructor called for host: " << this->host << std::endl;
}

bool MYSQL::Connect() {
    if (!this->connected) {
        this->connected = true;
        std::cout << "Connected to MySQL database at " << this->host << std::endl;
        return true;
    }
    return false;
}

bool MYSQL::Disconnect() {
    if (this->connected) {
        this->connected = false;
        std::cout << "Disconnected from MySQL database at " << this->host << std::endl;
        return true;
    }
    return false;
}

bool MYSQL::executeQuery(const char* query) {
    if (this->connected) {
        std::cout << "Executing query on MySQL database at " << this->host << ": " << query << std::endl;
        return true;
    }
    return false;
}


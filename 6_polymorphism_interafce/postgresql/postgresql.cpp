#include "postgresql.hpp"

POSTGRESQL::POSTGRESQL(std::string host, bool connected) : host(host), connected(false) {}
POSTGRESQL::~POSTGRESQL() {
    std::cout << "PostgreSQL destructor called for host: " << this->host << std::endl;
}

bool POSTGRESQL::Connect() {
    if (!this->connected) {
        this->connected = true;
        std::cout << "Connected to PostgreSQL database at " << this->host << std::endl;
        return true;
    }
    return false;
}

bool POSTGRESQL::Disconnect() {
    if (this->connected) {
        this->connected = false;
        std::cout << "Disconnected from PostgreSQL database at " << this->host << std::endl;
        return true;
    }
    return false;
}

bool POSTGRESQL::executeQuery(const char* query) {
    if (this->connected) {
        std::cout << "Executing query on PostgreSQL database at " << this->host << ": " << query << std::endl;
        return true;
    }
    return false;
}
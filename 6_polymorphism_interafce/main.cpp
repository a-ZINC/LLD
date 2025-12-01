#include "postgresql/postgresql.hpp"
#include "mysql/mysql.hpp"
#include <iostream>

int main() {
    DB* db1 = new MYSQL("localhost_mysql", false);
    DB* db2 = new POSTGRESQL("localhost_postgresql", false);

    db1->Connect();
    db1->executeQuery("SELECT * FROM users;");
    db1->Disconnect();

    db2->Connect();
    db2->executeQuery("SELECT * FROM employees;");
    db2->Disconnect();

    delete db1;
    delete db2;

    return 0;
}
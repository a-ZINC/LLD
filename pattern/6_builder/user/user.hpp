#ifndef USER_HPP
#define USER_HPP

#include <string>

class User {
    private:
        std::string id;
        std::string name;
        std::string email;
        std::string password;
        std::string address;

        User() {}
        friend class UserBuilder;
    public:
        std::string getId();
        std::string getName();
        std::string getEmail();
        std::string getPassword();
        std::string getAddress();
};

#endif
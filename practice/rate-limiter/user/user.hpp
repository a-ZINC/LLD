#ifndef USER_HPP
#define USER_HPP

#include<string>

enum UserType {
    FREE,
    PREMIUM
};

class User {
    private:
        int id;
        std::string name;
        UserType type;
    public:
        User(int id, std::string name, UserType type) : id(id), name(name), type(type) {}
        int getId();
        UserType getType() {
            return this->type;
        }
};

#endif
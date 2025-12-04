#ifndef USER_BUILDER_HPP
#define USER_BUILDER_HPP

#include "../user/user.hpp"

class UserBuilder {
    private:
        User* user = nullptr;

    public:
        UserBuilder() {
            user = new User();
        }

        UserBuilder& setId(const std::string& id);
        UserBuilder& setName(const std::string& name);
        UserBuilder& setEmail(const std::string& email);
        UserBuilder& setPassword(const std::string& password);
        UserBuilder& setAddress(const std::string& address);
        User* build();
};
#endif
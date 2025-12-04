#include "user.builder.hpp"

UserBuilder& UserBuilder::setId(const std::string& id) {
    user->id = id;
    return *this;
}
UserBuilder& UserBuilder::setName(const std::string& name) {
    user->name = name;
    return *this;
}
UserBuilder& UserBuilder::setEmail(const std::string& email) {
    user->email = email;
    return *this;
}
UserBuilder& UserBuilder::setPassword(const std::string& password) {
    user->password = password;
    return *this;
}
UserBuilder& UserBuilder::setAddress(const std::string& address) {
    user->address = address;
    return *this;
}
User* UserBuilder::build() {
    if (user != nullptr) {
        if (user->id.empty() || user->name.empty() || user->email.empty() || user->password.empty()) {
            delete user;
            user = nullptr;
            return nullptr;
        }
        User* builtUser = user;
        user = nullptr;
        return builtUser;
    }
    return nullptr;
}

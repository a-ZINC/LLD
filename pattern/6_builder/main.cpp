#include"./builder/user.builder.hpp"
#include <iostream>

int main() {
    UserBuilder builder;

    User* user = builder.setId("1")
                        .setName("John Doe")
                        .setEmail("john.doe@example.com")
                        .setPassword("securepassword")
                        .setAddress("123 Main St, Anytown, USA")
                        .build();
    if (user != nullptr) {
        std::cout << "User created successfully!" << std::endl;
        std::cout << "ID: " << user->getId() << std::endl;
        std::cout << "Name: " << user->getName() << std::endl;
        std::cout << "Email: " << user->getEmail() << std::endl;
        std::cout << "Address: " << user->getAddress() << std::endl;
        delete user;
    } else {
        std::cout << "Failed to create user. Missing required fields." << std::endl;
    }
    return 0;
}
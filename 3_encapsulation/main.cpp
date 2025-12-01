#include<string>
#include "email.cpp"

int main() {
    Email e1("a@gmail.com");
    Email e2("1234");
    
    std::cout << "host: " << e1.getHost() << " domain: " << e1.getDomain() << " email: " << e1.getEmail() << std::endl;
    std::cout << "host: " << e2.getHost() << " domain: " << e2.getDomain() << " email: " << e2.getEmail() << std::endl;
}
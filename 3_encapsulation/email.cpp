#include<string>
#include<iostream>

class Email {
    private:
        std::string host;
        std::string domain;

        bool isValid(std::string email) {
            int atpos = email.find('@');
            int dotpos = email.find('.');
            return (
                atpos != std::string::npos
                && dotpos != std::string::npos
                && atpos != 0
                && dotpos != email.size() - 1
                && dotpos > atpos + 2 
            );
        }
    public:
        
        Email(std::string email) {
            setEmail(email);
        }

        void setEmail(std::string email) {
            if (isValid(email)) {
                int atpos = email.find('@');
                this->host = email.substr(0, atpos);
                this->domain = email.substr(atpos + 1, email.size() - 1);
            } else {
                this->host = "INVALID";
                this->domain = "INVALID";
            }
        }

        std::string getHost() {
            return this->host;
        }

        std::string getDomain() {
            return this->domain;
        }

        std::string getEmail() {
            return this->host + '@' + this->domain;
        }
};
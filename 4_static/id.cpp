#include<string>
#include<iostream>

class IdGenerator {
    private:
        static int id;
    public:
        static int generateId() {
            return id++;
        }

        static int getCurrentId() {
            return id;
        }

        static int resetId() {
            id = 0;
            return id;
        }
};
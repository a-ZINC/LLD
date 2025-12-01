#include<string>
#include <iostream>
using namespace std;

class Car {
    public:
    string brand;
    string model;
    int year;
    int speed;


    void displayInfo() {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }

    void accerelate(int speed) {
        speed += 10;
        cout << "Current speed: " << speed << " km/h" << endl;
    }

    void brake(int speed) {
        if (speed >= 10) {
            speed -= 10;
        } else {
            speed = 0;
        }
        cout << "Current speed: " << speed << " km/h" << endl;
    }
};
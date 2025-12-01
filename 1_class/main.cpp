#include<string.h>
#include <iostream>
#include "car.cpp"
#include<thread>
#include<chrono>


int main() {
    int speed = 0;
    int year = 2000;
    string brand = "Generic";
    string model = "Model";

    while (true) {
        std::cout << "Hello, World!" << std::endl;
        Car myCar;
        myCar.brand = brand;
        myCar.model = model + to_string(random() % 100);
        myCar.year = year + (random() % 24);
        myCar.speed = speed;
        myCar.displayInfo();
        myCar.accerelate(myCar.speed + random() % 50);
        myCar.brake(myCar.speed + random() % 50);
        cout<< "------------------------" << endl;
        cout<< "------------------------" << endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));

    }
}
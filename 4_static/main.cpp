#include<iostream>
#include "id.cpp"

using namespace std;

int IdGenerator::id = 100;

int main() {
    cout << "generated id: " << IdGenerator::generateId() << endl;
    cout<< "current id: "<< IdGenerator::getCurrentId() << endl;
    cout<< "reseted id: "<< IdGenerator::resetId() << endl;

    return 0;
}
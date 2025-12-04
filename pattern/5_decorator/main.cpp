#include "coffee/coffee.hpp"
#include "coffee/basic.coffee.hpp"
#include "add-on/milk.hpp"

using namespace std;
int main() {
    Coffee* myCoffee = new BasicCoffee();
    cout << "Cost: " << myCoffee->cost() << ", Description: " << myCoffee->description() << std::endl;
    myCoffee = new Milk(myCoffee);
    cout << "Cost: " << myCoffee->cost() << ", Description: " << myCoffee->description() << std::endl;
    myCoffee = new Milk(myCoffee);
    cout << "Cost: " << myCoffee->cost() << ", Description: " << myCoffee->description() << std::endl;
    delete myCoffee;
}
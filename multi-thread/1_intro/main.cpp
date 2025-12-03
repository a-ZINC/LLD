#include<thread>
#include<iostream>
#include<chrono>

using namespace std;

int prepareFood() {
    cout << "Preparing food in thread ID: " << this_thread::get_id() << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Food prepared!" << endl;
    return 1;
}

int prepreDrinks() {
    cout << "preparing Drinks in thread ID: " << this_thread::get_id() << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Drinks prepared!" << endl;
    return 1;
}

int main() {

    cout << "Main thread ID: " << this_thread::get_id() << endl;
    auto start = chrono::high_resolution_clock::now();

    thread foodThread(prepareFood);
    thread drinksThread(prepreDrinks);

    foodThread.join();
    drinksThread.join();

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> duration = end - start;
    cout << "Time taken: " << duration.count() / 1000 << " s" << endl;
    return 0;
}
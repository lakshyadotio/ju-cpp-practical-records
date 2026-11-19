// Question 75: Write a program to demonstrate upcasting in C++.
#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() {
        cout << "Vehicle engine started." << endl;
    }
    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    void start() override {
        cout << "Car engine revving smoothly with push-button start." << endl;
    }

    void openSunroof() {
        cout << "Sunroof opened." << endl;
    }
};

int main() {
    Car myCar;

    // Upcasting: Converting Derived pointer/reference to Base pointer/reference
    // Safe and implicit in C++
    Vehicle *vPtr = &myCar;

    cout << "Calling start() via upcasted Vehicle pointer: ";
    vPtr->start(); // Polymorphic call dispatches Car::start()

    // vPtr->openSunroof(); // Error: Vehicle interface does not know about openSunroof

    return 0;
}

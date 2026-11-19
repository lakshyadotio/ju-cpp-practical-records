// Question 76: Write a program to demonstrate downcasting in C++.
#include <iostream>
using namespace std;

class Base {
public:
    virtual void greet() {
        cout << "Hello from Base class." << endl;
    }
    virtual ~Base() {}
};

class Derived : public Base {
public:
    void greet() override {
        cout << "Hello from Derived class." << endl;
    }

    void specificAction() {
        cout << "Specific method only available in Derived class executed!" << endl;
    }
};

int main() {
    Base *basePtr = new Derived(); // Upcasted pointer

    cout << "Calling greet() from base pointer:" << endl;
    basePtr->greet();

    // Downcasting: Converting Base pointer to Derived pointer using dynamic_cast
    Derived *derivedPtr = dynamic_cast<Derived*>(basePtr);

    if (derivedPtr != nullptr) {
        cout << "\nDowncasting successful!" << endl;
        derivedPtr->specificAction();
    } else {
        cout << "\nDowncasting failed!" << endl;
    }

    delete basePtr;
    return 0;
}

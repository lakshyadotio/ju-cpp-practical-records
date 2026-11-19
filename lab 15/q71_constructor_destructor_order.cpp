// Question 70: Write a program to demonstrate the execution order of constructors and destructors in a derived class.
#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "[1] Base Class Constructor executed" << endl;
    }
    ~Base() {
        cout << "[4] Base Class Destructor executed" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "[2] Derived Class Constructor executed" << endl;
    }
    ~Derived() {
        cout << "[3] Derived Class Destructor executed" << endl;
    }
};

int main() {
    cout << "Creating Derived object inside scope block:" << endl;
    {
        Derived obj;
    }
    cout << "Object destroyed and exited block." << endl;
    return 0;
}

// Question 72: Write a program to demonstrate constructor execution order in multiple inheritance.
#include <iostream>
using namespace std;

class BaseOne {
public:
    BaseOne() {
        cout << "[BaseOne] Constructor invoked" << endl;
    }
    ~BaseOne() {
        cout << "[BaseOne] Destructor invoked" << endl;
    }
};

class BaseTwo {
public:
    BaseTwo() {
        cout << "[BaseTwo] Constructor invoked" << endl;
    }
    ~BaseTwo() {
        cout << "[BaseTwo] Destructor invoked" << endl;
    }
};

// Order of constructor call follows the order in the class declaration list: BaseOne, then BaseTwo
class DerivedMultiple : public BaseOne, public BaseTwo {
public:
    DerivedMultiple() {
        cout << "[DerivedMultiple] Constructor invoked" << endl;
    }
    ~DerivedMultiple() {
        cout << "[DerivedMultiple] Destructor invoked" << endl;
    }
};

int main() {
    cout << "Demonstrating Constructor/Destructor order in Multiple Inheritance:" << endl;
    {
        DerivedMultiple obj;
    }
    return 0;
}

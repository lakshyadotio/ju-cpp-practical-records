// Question 71: Write a program to demonstrate constructor execution in multilevel inheritance.
#include <iostream>
using namespace std;

class Grandparent {
public:
    Grandparent(int g) {
        cout << "Grandparent constructor called with val: " << g << endl;
    }
    ~Grandparent() {
        cout << "Grandparent destructor called" << endl;
    }
};

class Parent : public Grandparent {
public:
    Parent(int g, int p) : Grandparent(g) {
        cout << "Parent constructor called with val: " << p << endl;
    }
    ~Parent() {
        cout << "Parent destructor called" << endl;
    }
};

class Child : public Parent {
public:
    Child(int g, int p, int c) : Parent(g, p) {
        cout << "Child constructor called with val: " << c << endl;
    }
    ~Child() {
        cout << "Child destructor called" << endl;
    }
};

int main() {
    cout << "--- Multilevel Inheritance Constructor Chain ---" << endl;
    {
        Child c(10, 20, 30);
    }
    cout << "--- Execution complete ---" << endl;
    return 0;
}

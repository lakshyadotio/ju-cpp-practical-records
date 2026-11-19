// Question 73: Write a program to implement runtime polymorphism using virtual functions in C++.
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing generic Shape" << endl;
    }
    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle: (O)" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle: [___]" << endl;
    }
};

int main() {
    Shape *shapePtr;

    Circle c;
    Rectangle r;

    // Pointing to Circle object at runtime
    shapePtr = &c;
    cout << "Runtime dispatch via Shape*: ";
    shapePtr->draw();

    // Pointing to Rectangle object at runtime
    shapePtr = &r;
    cout << "Runtime dispatch via Shape*: ";
    shapePtr->draw();

    return 0;
}

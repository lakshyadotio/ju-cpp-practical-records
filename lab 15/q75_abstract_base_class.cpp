// Question 74: Write a program to implement an abstract base class using pure virtual functions in C++.
#include <iostream>
using namespace std;

// Abstract Base Class
class AbstractShape {
public:
    // Pure virtual functions
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual void display() const = 0;

    virtual ~AbstractShape() {}
};

class Rectangle : public AbstractShape {
private:
    double length, breadth;

public:
    Rectangle(double l, double b) : length(l), breadth(b) {}

    double area() const override {
        return length * breadth;
    }

    double perimeter() const override {
        return 2 * (length + breadth);
    }

    void display() const override {
        cout << "Rectangle [" << length << " x " << breadth << "]" << endl;
        cout << "  Area:      " << area() << endl;
        cout << "  Perimeter: " << perimeter() << endl;
    }
};

class Circle : public AbstractShape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14159 * radius * radius;
    }

    double perimeter() const override {
        return 2 * 3.14159 * radius;
    }

    void display() const override {
        cout << "Circle [radius = " << radius << "]" << endl;
        cout << "  Area:      " << area() << endl;
        cout << "  Perimeter: " << perimeter() << endl;
    }
};

int main() {
    AbstractShape *s1 = new Rectangle(5.0, 3.0);
    AbstractShape *s2 = new Circle(4.0);

    cout << "--- Abstract Base Class Demonstration ---" << endl;
    s1->display();
    cout << endl;
    s2->display();

    delete s1;
    delete s2;

    return 0;
}

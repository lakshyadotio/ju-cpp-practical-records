// Question 45: Write a program to demonstrate function overloading in the member functions of a class.
#include <iostream>
using namespace std;

class AreaCalculator {
public:
    // Area of Circle
    double computeArea(double radius) {
        return 3.1415926535 * radius * radius;
    }

    // Area of Rectangle
    double computeArea(double length, double breadth) {
        return length * breadth;
    }

    // Area of Triangle
    double computeArea(double base, double height, bool isTriangle) {
        if (isTriangle)
            return 0.5 * base * height;
        return base * height;
    }
};

int main() {
    AreaCalculator calc;

    cout << "Area of Circle (r = 5.0):          " << calc.computeArea(5.0) << endl;
    cout << "Area of Rectangle (l = 4, b = 6):  " << calc.computeArea(4.0, 6.0) << endl;
    cout << "Area of Triangle (b = 3, h = 8):   " << calc.computeArea(3.0, 8.0, true) << endl;

    return 0;
}

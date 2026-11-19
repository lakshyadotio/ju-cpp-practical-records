// Question 55: Write a program to implement unary operator overloading using a friend function.
#include <iostream>
using namespace std;

class Coordinate {
private:
    int x, y;

public:
    Coordinate(int x = 0, int y = 0) : x(x), y(y) {}

    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }

    // Friend function to overload unary minus operator
    friend Coordinate operator-(const Coordinate &c);
};

Coordinate operator-(const Coordinate &c) {
    return Coordinate(-c.x, -c.y);
}

int main() {
    Coordinate c1(15, -20);

    cout << "Original Coordinate c1: ";
    c1.display();

    Coordinate c2 = -c1; // Unary operator overloaded via friend function

    cout << "Negated Coordinate c2:  ";
    c2.display();

    return 0;
}

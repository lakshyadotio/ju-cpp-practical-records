// Question 54: Write a program to implement unary operator overloading using a member function.
#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;
    int z;

public:
    Point(int x = 0, int y = 0, int z = 0) : x(x), y(y), z(z) {}

    // Unary minus operator as a member function
    Point operator-() const {
        return Point(-x, -y, -z);
    }

    void display() const {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }
};

int main() {
    Point p1(10, -25, 40);

    cout << "Original Point p1: ";
    p1.display();

    Point p2 = -p1;

    cout << "Negated Point p2:  ";
    p2.display();

    return 0;
}

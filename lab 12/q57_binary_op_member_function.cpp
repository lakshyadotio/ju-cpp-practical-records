// Question 56: Write a program to implement binary operator overloading using a member function.
#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Binary + operator overloaded as member function
    Complex operator+(const Complex &c) const {
        return Complex(real + c.real, imag + c.imag);
    }

    void display() const {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main() {
    Complex c1(4.2, 5.8);
    Complex c2(1.8, 3.2);

    cout << "Complex 1: ";
    c1.display();

    cout << "Complex 2: ";
    c2.display();

    Complex sum = c1 + c2; // Member function binary operator+

    cout << "Sum:       ";
    sum.display();

    return 0;
}

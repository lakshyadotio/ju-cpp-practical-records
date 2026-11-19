// Question 57: Write a program to implement binary operator overloading using a friend function.
#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    void display() const {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }

    // Friend function overloading binary + operator
    friend Complex operator+(const Complex &c1, const Complex &c2);
};

Complex operator+(const Complex &c1, const Complex &c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(6.5, 2.5);
    Complex c2(3.5, 4.5);

    cout << "Complex 1: ";
    c1.display();

    cout << "Complex 2: ";
    c2.display();

    Complex sum = c1 + c2; // Overloaded via friend function

    cout << "Sum:       ";
    sum.display();

    return 0;
}

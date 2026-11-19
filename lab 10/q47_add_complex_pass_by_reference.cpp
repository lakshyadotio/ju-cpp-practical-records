// Question 46: Write a program to add two complex numbers, passing the objects by reference and returning the result by value.
#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    void display() const {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }

    // Passing by reference, returning result by value
    Complex add(const Complex &c) const {
        Complex temp;
        temp.real = this->real + c.real;
        temp.imag = this->imag + c.imag;
        return temp; // Returning by value
    }
};

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);

    cout << "First Complex Number:  ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    // Call add method
    Complex c3 = c1.add(c2);

    cout << "Resultant Sum:         ";
    c3.display();

    return 0;
}

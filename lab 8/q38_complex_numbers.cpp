// Question 37: Write a program to read, display, add, and subtract two complex numbers.
#include <iostream>
using namespace std;

struct Complex {
    float real;
    float imag;

    void read() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    void display() const {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }

    Complex add(const Complex &c) const {
        Complex res;
        res.real = real + c.real;
        res.imag = imag + c.imag;
        return res;
    }

    Complex subtract(const Complex &c) const {
        Complex res;
        res.real = real - c.real;
        res.imag = imag - c.imag;
        return res;
    }
};

int main() {
    Complex c1, c2, sum, diff;

    cout << "First Complex Number:" << endl;
    c1.read();

    cout << "\nSecond Complex Number:" << endl;
    c2.read();

    sum = c1.add(c2);
    diff = c1.subtract(c2);

    cout << "\n--- Results ---" << endl;
    cout << "First Complex Number:  ";
    c1.display();
    cout << "Second Complex Number: ";
    c2.display();
    cout << "Sum:                   ";
    sum.display();
    cout << "Difference:            ";
    diff.display();

    return 0;
}

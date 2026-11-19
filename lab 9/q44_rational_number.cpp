// Question 43: Write a program to enter a rational number, simplify it, and display the result.
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return (a < 0) ? -a : a;
}

struct Rational {
    int numerator;
    int denominator;

    void simplify() {
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
        int common = gcd(numerator, denominator);
        numerator /= common;
        denominator /= common;
    }

    void display() const {
        if (denominator == 1) {
            cout << numerator << endl;
        } else if (numerator == 0) {
            cout << 0 << endl;
        } else {
            cout << numerator << "/" << denominator << endl;
        }
    }
};

int main() {
    Rational r;
    cout << "Enter numerator: ";
    cin >> r.numerator;

    cout << "Enter denominator: ";
    cin >> r.denominator;

    if (r.denominator == 0) {
        cout << "Error: Denominator cannot be zero!" << endl;
        return 1;
    }

    cout << "Original Rational Number: " << r.numerator << "/" << r.denominator << endl;
    r.simplify();
    cout << "Simplified Rational Number: ";
    r.display();

    return 0;
}

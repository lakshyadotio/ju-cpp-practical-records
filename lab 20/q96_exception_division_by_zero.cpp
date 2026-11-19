// Question 95: Write a program to implement exception handling for division by zero in C++.
#include <iostream>
using namespace std;

double divideNumbers(double num, double den) {
    if (den == 0.0) {
        throw "Division by zero is undefined!";
    }
    return num / den;
}

int main() {
    double numerator, denominator;

    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        double result = divideNumbers(numerator, denominator);
        cout << "Result of " << numerator << " / " << denominator << " = " << result << endl;
    }
    catch (const char *err) {
        cout << "Exception Caught: " << err << endl;
    }

    return 0;
}

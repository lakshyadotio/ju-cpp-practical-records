// Question 94: Write a program to demonstrate exception handling in an invoked function in C++.
#include <iostream>
using namespace std;

// Invoked function that throws an exception
void computeDiscount(double price, double discount) {
    cout << "Inside computeDiscount function..." << endl;
    if (discount < 0.0 || discount > 100.0) {
        throw "Invalid discount percentage (must be between 0 and 100)!";
    }
    double finalPrice = price - (price * discount / 100.0);
    cout << "Final price after discount: $" << finalPrice << endl;
}

int main() {
    double price = 500.0;
    double discount = 120.0; // Invalid discount

    cout << "Calling invoked function from main:" << endl;
    try {
        computeDiscount(price, discount);
    }
    catch (const char *errMsg) {
        cout << "Exception caught in main(): " << errMsg << endl;
    }

    cout << "Stack unwound successfully, program terminating safely." << endl;
    return 0;
}

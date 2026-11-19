// Question 96: Write a program to implement exception handling for invalid input in C++.
#include <iostream>
#include <stdexcept>
using namespace std;

int getPositiveInteger() {
    int val;
    cout << "Enter a positive integer: ";
    if (!(cin >> val)) {
        cin.clear();
        string garbage;
        cin >> garbage;
        throw invalid_argument("Non-numeric input entered: '" + garbage + "'");
    }
    if (val <= 0) {
        throw out_of_range("Value must be strictly positive (greater than 0)!");
    }
    return val;
}

int main() {
    try {
        int n = getPositiveInteger();
        cout << "Valid input received: " << n << endl;
    }
    catch (const invalid_argument &e) {
        cout << "Input Error Caught: " << e.what() << endl;
    }
    catch (const out_of_range &e) {
        cout << "Range Error Caught: " << e.what() << endl;
    }

    return 0;
}

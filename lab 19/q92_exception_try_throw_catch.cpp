// Question 91: Write a program to implement exception handling using try, throw, and catch in C++.
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter voter's age: ";
    cin >> age;

    try {
        if (age < 0) {
            throw "Age cannot be negative!";
        }
        if (age < 18) {
            throw age;
        }
        cout << "Access granted: You are eligible to vote." << endl;
    }
    catch (const char *msg) {
        cout << "Error Caught: " << msg << endl;
    }
    catch (int underAge) {
        cout << "Voting Error: Age " << underAge << " is under the legal limit of 18 years." << endl;
    }

    cout << "Program execution resumed normally after catch block." << endl;
    return 0;
}

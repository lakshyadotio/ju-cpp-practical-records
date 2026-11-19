// Question 93: Write a program to implement a catch-all exception handler in C++.
#include <iostream>
#include <string>
using namespace std;

void processRequest(int mode) {
    try {
        if (mode == 1)
            throw 100;
        else if (mode == 2)
            throw string("Custom standard string exception");
        else if (mode == 3)
            throw 'X'; // Char exception
        else
            cout << "Processing successful without errors." << endl;
    }
    catch (int code) {
        cout << "Specific Handler: Caught integer error code: " << code << endl;
    }
    catch (...) {
        // Catch-all block for any unhandled exception types
        cout << "Default Catch-All Handler: Caught an unexpected/unhandled exception!" << endl;
    }
}

int main() {
    cout << "Testing Catch-All Exception Handler:" << endl;
    processRequest(1);
    processRequest(2);
    processRequest(3);
    processRequest(0);
    return 0;
}

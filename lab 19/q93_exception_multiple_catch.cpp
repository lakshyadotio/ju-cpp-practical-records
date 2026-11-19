// Question 92: Write a program to demonstrate exception handling using multiple catch statements in C++.
#include <iostream>
using namespace std;

void testException(int choice) {
    try {
        if (choice == 1)
            throw 404; // Integer exception
        else if (choice == 2)
            throw 3.14159; // Double exception
        else if (choice == 3)
            throw "String exception: Resource not found!"; // C-string exception
        else
            cout << "No exception thrown for choice: " << choice << endl;
    }
    catch (int code) {
        cout << "[Catch Block 1] Caught Integer Exception Code: " << code << endl;
    }
    catch (double d) {
        cout << "[Catch Block 2] Caught Double Precision Exception: " << d << endl;
    }
    catch (const char *str) {
        cout << "[Catch Block 3] Caught String Exception: " << str << endl;
    }
}

int main() {
    cout << "--- Testing Multiple Catch Blocks ---" << endl;
    testException(1);
    testException(2);
    testException(3);
    testException(4);
    return 0;
}

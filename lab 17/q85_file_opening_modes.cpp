// Question 84: Write a program to demonstrate different file opening modes in C++.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Mode 1: ios::out | ios::trunc (Default for ofstream)
    cout << "1. Writing in ios::out | ios::trunc mode..." << endl;
    ofstream f1("modes_demo.txt", ios::out | ios::trunc);
    f1 << "Initial line created." << endl;
    f1.close();

    // Mode 2: ios::app (Append mode)
    cout << "2. Appending in ios::app mode..." << endl;
    ofstream f2("modes_demo.txt", ios::app);
    f2 << "Appended line added at the end." << endl;
    f2.close();

    // Mode 3: ios::in (Read mode)
    cout << "3. Reading in ios::in mode:" << endl;
    ifstream f3("modes_demo.txt", ios::in);
    string line;
    while (getline(f3, line)) {
        cout << "   " << line << endl;
    }
    f3.close();

    return 0;
}

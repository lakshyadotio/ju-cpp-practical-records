// Question 82: Write a program to demonstrate opening and closing files using file stream classes in C++.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    fstream file;

    // 1. Open file using stream class in output mode
    file.open("sample_stream.txt", ios::out);
    if (file.is_open()) {
        cout << "File opened successfully in WRITE mode." << endl;
        file << "Demonstrating C++ file stream open and close methods." << endl;
        file.close(); // Close stream
        cout << "File closed after writing." << endl;
    }

    // 2. Open file using stream class in input mode
    file.open("sample_stream.txt", ios::in);
    if (file.is_open()) {
        cout << "\nFile reopened successfully in READ mode." << endl;
        string content;
        while (getline(file, content)) {
            cout << "Read line: " << content << endl;
        }
        file.close(); // Close stream
        cout << "File closed after reading." << endl;
    }

    return 0;
}

// Question 85: Write a program to demonstrate file pointers using seekg(), seekp(), tellg(), and tellp() in C++.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    fstream file("seek_demo.txt", ios::in | ios::out | ios::trunc);

    file << "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "Current write position (tellp): " << file.tellp() << endl;

    // Reposition write pointer to index 10 using seekp()
    file.seekp(10, ios::beg);
    cout << "After seekp(10, ios::beg), tellp: " << file.tellp() << endl;
    file << "12345"; // Overwrite characters starting at position 10

    // Flush and reset read pointer to start using seekg()
    file.seekg(0, ios::beg);
    cout << "Current read position (tellg):  " << file.tellg() << endl;

    string content;
    getline(file, content);
    cout << "File content after overwrite:   " << content << endl;

    // Reposition read pointer to 5 bytes before the end
    file.clear(); // Clear any eof flags
    file.seekg(-5, ios::end);
    cout << "Position after seekg(-5, ios::end): " << file.tellg() << endl;

    char ch;
    cout << "Last 5 characters read:         ";
    while (file.get(ch)) {
        cout << ch;
    }
    cout << endl;

    file.close();
    return 0;
}

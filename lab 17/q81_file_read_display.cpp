// Question 80: Write a program to read and display the contents of a file in C++.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("students_log.txt");

    if (!inFile) {
        cout << "File not found! Writing dummy data first..." << endl;
        ofstream temp("students_log.txt");
        temp << "Student Roll No: 101\nStudent Name: Mohit Lakhara\nCollege: JECRC Jaipur\n";
        temp.close();
        inFile.open("students_log.txt");
    }

    cout << "--- Contents of 'students_log.txt' ---" << endl;
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();
    return 0;
}

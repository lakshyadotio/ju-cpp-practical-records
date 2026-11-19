// Question 79: Write a program to create a file and write data into it in C++.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("students_log.txt");

    if (!outFile) {
        cerr << "Error: File could not be created!" << endl;
        return 1;
    }

    cout << "File 'students_log.txt' created successfully." << endl;

    outFile << "Student Roll No: 101" << endl;
    outFile << "Student Name: Mohit Lakhara" << endl;
    outFile << "College: JECRC Jaipur" << endl;
    outFile << "Subject: C++ Object Oriented Programming Lab" << endl;

    outFile.close();
    cout << "Data written and file closed successfully." << endl;

    return 0;
}

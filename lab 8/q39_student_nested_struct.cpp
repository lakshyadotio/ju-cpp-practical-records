// Question 38: Write a program to read and display student information using a nested structure.
#include <iostream>
#include <string>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    int rollNo;
    string name;
    string branch;
    Date dob; // Nested structure member
};

int main() {
    Student s;

    cout << "Enter Roll Number: ";
    cin >> s.rollNo;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, s.name);

    cout << "Enter Branch: ";
    getline(cin, s.branch);

    cout << "Enter Date of Birth (DD MM YYYY): ";
    cin >> s.dob.day >> s.dob.month >> s.dob.year;

    cout << "\n--- Student Details ---" << endl;
    cout << "Roll Number: " << s.rollNo << endl;
    cout << "Name:        " << s.name << endl;
    cout << "Branch:      " << s.branch << endl;
    cout << "DOB:         " << s.dob.day << "/" << s.dob.month << "/" << s.dob.year << endl;

    return 0;
}

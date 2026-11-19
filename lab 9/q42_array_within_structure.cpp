// Question 41: Write a program to illustrate the use of arrays within a structure.
#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    int marks[5]; // Array within structure
    int total;
    float percentage;
};

int main() {
    Student s;
    s.total = 0;

    cout << "Enter Roll Number: ";
    cin >> s.rollNo;
    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, s.name);

    cout << "Enter marks for 5 subjects (out of 100):" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << (i + 1) << ": ";
        cin >> s.marks[i];
        s.total += s.marks[i];
    }

    s.percentage = (float)s.total / 5.0f;

    cout << "\n--- Student Report Card ---" << endl;
    cout << "Roll Number: " << s.rollNo << endl;
    cout << "Name:        " << s.name << endl;
    cout << "Subject Marks: ";
    for (int i = 0; i < 5; i++) {
        cout << s.marks[i] << " ";
    }
    cout << "\nTotal Marks: " << s.total << " / 500" << endl;
    cout << "Percentage:  " << s.percentage << "%" << endl;

    return 0;
}

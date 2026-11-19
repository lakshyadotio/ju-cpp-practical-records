// Question 44: Write a program to display a list of students in descending order of their marks.
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

bool compareByMarksDesc(const Student &a, const Student &b) {
    return a.marks > b.marks;
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    vector<Student> students(n);
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << (i + 1) << ":" << endl;
        cout << "Roll Number: ";
        cin >> students[i].rollNo;
        cin.ignore();
        cout << "Name: ";
        getline(cin, students[i].name);
        cout << "Marks: ";
        cin >> students[i].marks;
    }

    // Sort students in descending order of marks
    sort(students.begin(), students.end(), compareByMarksDesc);

    cout << "\n================ Merit List (Descending Order of Marks) ================" << endl;
    cout << "Rank\tRoll No\tName\t\tMarks" << endl;
    cout << "-------------------------------------------------------------------------" << endl;
    for (int i = 0; i < n; i++) {
        cout << (i + 1) << "\t" << students[i].rollNo << "\t" << students[i].name << "\t\t" << students[i].marks << endl;
    }

    return 0;
}

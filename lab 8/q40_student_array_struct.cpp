// Question 39: Write a program to read and display the information of all students in a class.
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    int n;
    cout << "Enter number of students in the class: ";
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

    cout << "\n================ Class Student Records ================" << endl;
    cout << "Roll No\tName\t\tMarks" << endl;
    cout << "-------------------------------------------------------" << endl;
    for (int i = 0; i < n; i++) {
        cout << students[i].rollNo << "\t" << students[i].name << "\t\t" << students[i].marks << endl;
    }

    return 0;
}

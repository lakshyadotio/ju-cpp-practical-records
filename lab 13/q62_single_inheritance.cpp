// Question 61: Write a program to implement single inheritance in C++.
#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void getPersonDetails() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
    }

    void displayPersonDetails() const {
        cout << "Name: " << name << endl;
        cout << "Age:  " << age << endl;
    }
};

// Derived class inheriting Person
class Student : public Person {
private:
    int rollNo;
    string course;

public:
    void getStudentDetails() {
        getPersonDetails();
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore();
        cout << "Enter Course: ";
        getline(cin, course);
    }

    void displayStudentDetails() const {
        cout << "\n--- Student Profile ---" << endl;
        displayPersonDetails();
        cout << "Roll: " << rollNo << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    Student s;
    s.getStudentDetails();
    s.displayStudentDetails();
    return 0;
}

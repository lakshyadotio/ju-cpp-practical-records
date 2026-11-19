// Question 65: Write a program to implement hierarchical inheritance in C++.
#include <iostream>
#include <string>
using namespace std;

// Base class
class Employee {
protected:
    int empId;
    string name;
    double baseSalary;

public:
    void getDetails() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Base Salary: ";
        cin >> baseSalary;
    }

    void displayDetails() const {
        cout << "ID: " << empId << " | Name: " << name << " | Base Salary: $" << baseSalary << endl;
    }
};

// Derived class 1: Developer
class Developer : public Employee {
private:
    string programmingLanguage;

public:
    void getDeveloperDetails() {
        getDetails();
        cin.ignore();
        cout << "Enter Primary Language: ";
        getline(cin, programmingLanguage);
    }

    void displayDeveloper() const {
        cout << "\n--- Developer Profile ---" << endl;
        displayDetails();
        cout << "Role: Developer | Language: " << programmingLanguage << endl;
    }
};

// Derived class 2: Manager
class Manager : public Employee {
private:
    int teamSize;

public:
    void getManagerDetails() {
        getDetails();
        cout << "Enter Team Size: ";
        cin >> teamSize;
    }

    void displayManager() const {
        cout << "\n--- Manager Profile ---" << endl;
        displayDetails();
        cout << "Role: Manager | Team Size: " << teamSize << endl;
    }
};

int main() {
    Developer dev;
    Manager mgr;

    cout << "=== Developer Entry ===" << endl;
    dev.getDeveloperDetails();

    cout << "\n=== Manager Entry ===" << endl;
    mgr.getManagerDetails();

    dev.displayDeveloper();
    mgr.displayManager();

    return 0;
}

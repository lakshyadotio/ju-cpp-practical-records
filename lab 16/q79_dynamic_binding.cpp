// Question 78: Write a program to demonstrate dynamic binding using virtual functions in C++.
#include <iostream>
using namespace std;

class Account {
public:
    virtual void calculateInterest() {
        cout << "Generic account interest computation." << endl;
    }
    virtual ~Account() {}
};

class SavingsAccount : public Account {
public:
    void calculateInterest() override {
        cout << "Savings Account Interest: 4.5% annual rate applied." << endl;
    }
};

class CurrentAccount : public Account {
public:
    void calculateInterest() override {
        cout << "Current Account: 0% interest on commercial operations." << endl;
    }
};

int main() {
    Account *acc = nullptr;
    int choice;

    cout << "Select Account Type (1: Savings, 2: Current): ";
    cin >> choice;

    // Dynamic Binding: Decision of which method to call is made at runtime
    if (choice == 1) {
        acc = new SavingsAccount();
    } else {
        acc = new CurrentAccount();
    }

    cout << "Executing dynamic binding call: ";
    acc->calculateInterest();

    delete acc;
    return 0;
}

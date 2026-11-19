// Question 63: Write a program to demonstrate inheritance using a Bill base class, with derived classes for payment by cash and cheque.
#include <iostream>
#include <string>
using namespace std;

// Base class
class Bill {
protected:
    int billNo;
    string customerName;
    double amount;

public:
    Bill(int bNo, string name, double amt) : billNo(bNo), customerName(name), amount(amt) {}

    void displayBillDetails() const {
        cout << "Bill No:       " << billNo << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Bill Amount:   $" << amount << endl;
    }
};

// Derived class for Cash payment
class CashBill : public Bill {
private:
    double amountReceived;

public:
    CashBill(int bNo, string name, double amt, double received)
        : Bill(bNo, name, amt), amountReceived(received) {}

    void displayCashBill() const {
        cout << "\n--- Cash Payment Receipt ---" << endl;
        displayBillDetails();
        cout << "Payment Mode:    Cash" << endl;
        cout << "Amount Received: $" << amountReceived << endl;
        cout << "Change Returned: $" << (amountReceived - amount) << endl;
    }
};

// Derived class for Cheque payment
class ChequeBill : public Bill {
private:
    string chequeNo;
    string bankName;

public:
    ChequeBill(int bNo, string name, double amt, string chq, string bank)
        : Bill(bNo, name, amt), chequeNo(chq), bankName(bank) {}

    void displayChequeBill() const {
        cout << "\n--- Cheque Payment Receipt ---" << endl;
        displayBillDetails();
        cout << "Payment Mode:    Cheque" << endl;
        cout << "Cheque No:       " << chequeNo << endl;
        cout << "Bank Name:       " << bankName << endl;
    }
};

int main() {
    CashBill cash(1001, "Alice Smith", 250.0, 300.0);
    cash.displayCashBill();

    ChequeBill cheque(1002, "Bob Jones", 1200.0, "CHQ889123", "State Bank of India");
    cheque.displayChequeBill();

    return 0;
}

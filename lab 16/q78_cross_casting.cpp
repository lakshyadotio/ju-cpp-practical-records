// Question 77: Write a program to demonstrate cross-casting in C++.
#include <iostream>
using namespace std;

// First interface
class Printable {
public:
    virtual void print() = 0;
    virtual ~Printable() {}
};

// Second interface
class Serializable {
public:
    virtual void serialize() = 0;
    virtual ~Serializable() {}
};

// Class implementing both interfaces
class Document : public Printable, public Serializable {
public:
    void print() override {
        cout << "Document printed to paper/screen." << endl;
    }

    void serialize() override {
        cout << "Document serialized to binary byte stream." << endl;
    }
};

int main() {
    Document doc;

    // Pointer to first interface
    Printable *pPrint = &doc;
    cout << "Using Printable pointer: ";
    pPrint->print();

    // Cross-casting: Cast across side-by-side base classes in multiple inheritance
    Serializable *pSerial = dynamic_cast<Serializable*>(pPrint);

    if (pSerial != nullptr) {
        cout << "Cross-casting to Serializable successful: ";
        pSerial->serialize();
    } else {
        cout << "Cross-casting failed." << endl;
    }

    return 0;
}

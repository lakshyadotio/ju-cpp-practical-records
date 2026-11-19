// Question 69: Write a program to demonstrate public, protected, and private access specifiers in inheritance.
#include <iostream>
using namespace std;

class Base {
private:
    int privateVar = 10;
protected:
    int protectedVar = 20;
public:
    int publicVar = 30;

    int getPrivateVar() const { return privateVar; }
};

// Public Inheritance:
// public -> public, protected -> protected, private -> inaccessible
class PublicDerived : public Base {
public:
    void show() {
        cout << "PublicDerived:" << endl;
        // cout << privateVar; // Not accessible directly
        cout << "  privateVar (via getter): " << getPrivateVar() << endl;
        cout << "  protectedVar:            " << protectedVar << endl;
        cout << "  publicVar:               " << publicVar << endl;
    }
};

// Protected Inheritance:
// public -> protected, protected -> protected
class ProtectedDerived : protected Base {
public:
    void show() {
        cout << "\nProtectedDerived:" << endl;
        cout << "  protectedVar:            " << protectedVar << endl;
        cout << "  publicVar (now protected): " << publicVar << endl;
    }
};

// Private Inheritance:
// public -> private, protected -> private
class PrivateDerived : private Base {
public:
    void show() {
        cout << "\nPrivateDerived:" << endl;
        cout << "  protectedVar (now private): " << protectedVar << endl;
        cout << "  publicVar (now private):    " << publicVar << endl;
    }
};

int main() {
    PublicDerived pub;
    pub.show();
    cout << "  External access to publicVar: " << pub.publicVar << endl;

    ProtectedDerived prot;
    prot.show();

    PrivateDerived priv;
    priv.show();

    return 0;
}

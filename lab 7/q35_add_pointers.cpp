#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first integer: ";
    cin >> a;

    cout << "Enter second integer: ";
    cin >> b;

    // Pointer variables storing memory addresses of a and b
    int *ptr1 = &a;
    int *ptr2 = &b;

    // Dereferencing pointers to calculate sum
    int sum = *ptr1 + *ptr2;

    cout << "\nValue of first integer (a): " << *ptr1 << endl;
    cout << "Value of second integer (b): " << *ptr2 << endl;
    cout << "Sum using pointers (*ptr1 + *ptr2): " << sum << endl;

    return 0;
}

// Question 86: Write a program to implement a function template in C++.
#include <iostream>
#include <string>
using namespace std;

// Function template to find maximum of two values
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

// Function template to swap two values
template <typename T>
void customSwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int i1 = 25, i2 = 40;
    cout << "Max of (" << i1 << ", " << i2 << "): " << findMax(i1, i2) << endl;

    double d1 = 12.8, d2 = 9.4;
    cout << "Max of (" << d1 << ", " << d2 << "): " << findMax(d1, d2) << endl;

    string s1 = "Apple", s2 = "Orange";
    cout << "Max of (" << s1 << ", " << s2 << "): " << findMax(s1, s2) << endl;

    cout << "\nBefore swap: s1 = " << s1 << ", s2 = " << s2 << endl;
    customSwap(s1, s2);
    cout << "After swap:  s1 = " << s1 << ", s2 = " << s2 << endl;

    return 0;
}

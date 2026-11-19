#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    if (str1 == str2) {
        cout << "Both strings are equal." << endl;
    } else if (str1 > str2) {
        cout << "First string is lexicographically greater than second string." << endl;
    } else {
        cout << "First string is lexicographically smaller than second string." << endl;
    }

    return 0;
}

// Question 36: Write a program to copy a string into a new string using dynamically allocated memory.
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char source[100];
    cout << "Enter a source string: ";
    cin.getline(source, 100);

    int len = strlen(source);

    // Dynamically allocate memory for destination string
    char *dest = new char[len + 1];

    // Copy characters
    strcpy(dest, source);

    cout << "\nOriginal String: " << source << endl;
    cout << "Copied String (dynamically allocated): " << dest << endl;
    cout << "Memory address of allocated string: " << (void*)dest << endl;

    // Free allocated memory
    delete[] dest;
    dest = nullptr;

    return 0;
}

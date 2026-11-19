// Question 90: Write a program to implement a function template with multiple data types in C++.
#include <iostream>
#include <string>
using namespace std;

template <typename T1, typename T2>
void printKeyValue(T1 key, T2 value) {
    cout << "Key: " << key << " -> Value: " << value << endl;
}

int main() {
    printKeyValue("Student Roll No", 101);
    printKeyValue(1, "First Rank");
    printKeyValue("CGPA", 9.45);
    printKeyValue('A', 90);

    return 0;
}

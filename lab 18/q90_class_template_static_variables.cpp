// Question 89: Write a program to demonstrate static variables in class templates in C++.
#include <iostream>
using namespace std;

template <typename T>
class Counter {
public:
    static int count;

    Counter() {
        count++;
    }

    static void showCount() {
        cout << "Instances of type [" << typeid(T).name() << "]: " << count << endl;
    }
};

// Initializing static member of class template
template <typename T>
int Counter<T>::count = 0;

int main() {
    Counter<int> i1, i2, i3;
    Counter<double> d1, d2;
    Counter<char> c1;

    cout << "--- Static Variables in Class Templates ---" << endl;
    Counter<int>::showCount();    // count = 3
    Counter<double>::showCount(); // count = 2
    Counter<char>::showCount();   // count = 1

    return 0;
}

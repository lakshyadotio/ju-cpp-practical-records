// Question 88: Write a program to implement a class template with a friend function in C++.
#include <iostream>
using namespace std;

// Forward declaration of class template
template <typename T>
class Container;

// Forward declaration of template friend function
template <typename T>
void displayContainer(const Container<T> &c);

template <typename T>
class Container {
private:
    T value;

public:
    Container(T val) : value(val) {}

    // Friend function template declaration
    friend void displayContainer<T>(const Container<T> &c);
};

// Definition of friend function
template <typename T>
void displayContainer(const Container<T> &c) {
    cout << "Container holding value of type [" << typeid(T).name() << "]: " << c.value << endl;
}

int main() {
    Container<int> cInt(42);
    Container<double> cDouble(3.14159);
    Container<char> cChar('Z');

    displayContainer(cInt);
    displayContainer(cDouble);
    displayContainer(cChar);

    return 0;
}

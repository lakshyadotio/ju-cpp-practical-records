// Question 47: Write a program to find the mean of two numbers belonging to two different classes using a friend function.
#include <iostream>
using namespace std;

class ClassB; // Forward declaration

class ClassA {
private:
    float valA;

public:
    ClassA(float v) : valA(v) {}
    friend float calculateMean(const ClassA &a, const ClassB &b);
};

class ClassB {
private:
    float valB;

public:
    ClassB(float v) : valB(v) {}
    friend float calculateMean(const ClassA &a, const ClassB &b);
};

// Friend function accessing private data of both classes
float calculateMean(const ClassA &a, const ClassB &b) {
    return (a.valA + b.valB) / 2.0f;
}

int main() {
    float x, y;
    cout << "Enter value for ClassA object: ";
    cin >> x;
    cout << "Enter value for ClassB object: ";
    cin >> y;

    ClassA objA(x);
    ClassB objB(y);

    cout << "Value in ClassA: " << x << endl;
    cout << "Value in ClassB: " << y << endl;
    cout << "Mean of the two values: " << calculateMean(objA, objB) << endl;

    return 0;
}

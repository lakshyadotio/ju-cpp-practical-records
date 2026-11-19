// Question 48: Write a program to add two arrays using a friend function and operator overloading.
#include <iostream>
#include <vector>
using namespace std;

class Array {
private:
    vector<int> arr;
    int size;

public:
    Array(int s = 0) : size(s), arr(s, 0) {}

    void read() {
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void display() const {
        cout << "[ ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << "]" << endl;
    }

    // Friend function overloading operator+
    friend Array operator+(const Array &a1, const Array &a2);
};

Array operator+(const Array &a1, const Array &a2) {
    int minSize = min(a1.size, a2.size);
    Array result(minSize);
    for (int i = 0; i < minSize; i++) {
        result.arr[i] = a1.arr[i] + a2.arr[i];
    }
    return result;
}

int main() {
    int n;
    cout << "Enter size of arrays: ";
    cin >> n;

    Array arr1(n), arr2(n);

    cout << "Enter " << n << " elements for array 1: ";
    arr1.read();

    cout << "Enter " << n << " elements for array 2: ";
    arr2.read();

    Array arr3 = arr1 + arr2;

    cout << "\nArray 1: ";
    arr1.display();

    cout << "Array 2: ";
    arr2.display();

    cout << "Sum Array (using operator+): ";
    arr3.display();

    return 0;
}

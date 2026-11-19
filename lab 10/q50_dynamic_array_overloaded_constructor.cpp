// Question 49: Write a program using overloaded constructors to dynamically allocate memory to an array and find its largest element.
#include <iostream>
using namespace std;

class DynamicArray {
private:
    int *arr;
    int size;

public:
    // Default constructor
    DynamicArray() {
        size = 5;
        arr = new int[size]{10, 25, 45, 12, 38};
    }

    // Overloaded parameterized constructor
    DynamicArray(int s) {
        size = s;
        arr = new int[size];
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    int findLargest() const {
        int maxVal = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] > maxVal) {
                maxVal = arr[i];
            }
        }
        return maxVal;
    }

    void display() const {
        cout << "[ ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << "]" << endl;
    }

    // Destructor to free dynamically allocated memory
    ~DynamicArray() {
        delete[] arr;
    }
};

int main() {
    cout << "--- Array 1 (Default Constructor) ---" << endl;
    DynamicArray a1;
    cout << "Elements: ";
    a1.display();
    cout << "Largest element in Array 1: " << a1.findLargest() << endl;

    int n;
    cout << "\n--- Array 2 (Parameterized Dynamic Constructor) ---" << endl;
    cout << "Enter size of array: ";
    cin >> n;

    DynamicArray a2(n);
    cout << "Elements: ";
    a2.display();
    cout << "Largest element in Array 2: " << a2.findLargest() << endl;

    return 0;
}

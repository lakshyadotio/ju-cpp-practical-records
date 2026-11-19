// Question 50: Write a program using a dynamic constructor to allocate memory to an array and count its even and odd elements.
#include <iostream>
using namespace std;

class ArrayProcessor {
private:
    int *arr;
    int size;

public:
    // Dynamic constructor allocating memory at runtime
    ArrayProcessor(int s) {
        size = s;
        arr = new int[size];
        cout << "Enter " << size << " integers:" << endl;
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void countEvenOdd() const {
        int evenCount = 0, oddCount = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] % 2 == 0)
                evenCount++;
            else
                oddCount++;
        }
        cout << "\nTotal Elements: " << size << endl;
        cout << "Even Count:     " << evenCount << endl;
        cout << "Odd Count:      " << oddCount << endl;
    }

    ~ArrayProcessor() {
        delete[] arr;
    }
};

int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    ArrayProcessor ap(n);
    ap.countEvenOdd();

    return 0;
}

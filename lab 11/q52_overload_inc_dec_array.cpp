// Question 51: Write a program to overload the increment and decrement operators for an array class.
#include <iostream>
#include <vector>
using namespace std;

class IntArray {
private:
    vector<int> data;

public:
    IntArray(const vector<int> &v) : data(v) {}

    // Prefix increment (++arr)
    IntArray& operator++() {
        for (size_t i = 0; i < data.size(); i++) {
            ++data[i];
        }
        return *this;
    }

    // Prefix decrement (--arr)
    IntArray& operator--() {
        for (size_t i = 0; i < data.size(); i++) {
            --data[i];
        }
        return *this;
    }

    void display() const {
        cout << "[ ";
        for (int x : data) cout << x << " ";
        cout << "]" << endl;
    }
};

int main() {
    vector<int> initial = {5, 10, 15, 20};
    IntArray arr(initial);

    cout << "Initial Array:           ";
    arr.display();

    ++arr;
    cout << "After Prefix Increment:  ";
    arr.display();

    --arr;
    cout << "After Prefix Decrement:  ";
    arr.display();

    return 0;
}

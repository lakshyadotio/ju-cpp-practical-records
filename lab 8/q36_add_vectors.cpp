// Question 35: Write a program to add two vectors represented by arrays.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the dimension of the vectors: ";
    cin >> n;

    vector<int> v1(n), v2(n), sum(n);

    cout << "Enter " << n << " elements for the first vector: ";
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    cout << "Enter " << n << " elements for the second vector: ";
    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }

    // Adding vectors element-wise
    for (int i = 0; i < n; i++) {
        sum[i] = v1[i] + v2[i];
    }

    cout << "\nFirst Vector:  [ ";
    for (int x : v1) cout << x << " ";
    cout << "]" << endl;

    cout << "Second Vector: [ ";
    for (int x : v2) cout << x << " ";
    cout << "]" << endl;

    cout << "Sum Vector:    [ ";
    for (int x : sum) cout << x << " ";
    cout << "]" << endl;

    return 0;
}

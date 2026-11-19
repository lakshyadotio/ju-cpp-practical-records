#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    cin.ignore(); // Clear newline buffer from cin

    vector<string> names(n);
    cout << "Enter " << n << " student names:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Student " << (i + 1) << ": ";
        getline(cin, names[i]);
    }

    // Sort names alphabetically in ascending order
    sort(names.begin(), names.end());

    cout << "\nSorted list of students:" << endl;
    for (int i = 0; i < n; i++) {
        cout << (i + 1) << ". " << names[i] << endl;
    }

    return 0;
}

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int totalLines;
    cout << "Enter total number of lines: ";
    cin >> totalLines;
    cin.ignore(); // Clear newline buffer

    vector<string> lines(totalLines);
    cout << "Enter " << totalLines << " lines of text:" << endl;
    for (int i = 0; i < totalLines; i++) {
        getline(cin, lines[i]);
    }

    int m, n;
    cout << "\nEnter starting line number (m, 1-indexed): ";
    cin >> m;
    cout << "Enter number of lines to display (n): ";
    cin >> n;

    int startIdx = m - 1;
    if (startIdx < 0 || startIdx >= totalLines) {
        cout << "\nInvalid starting line number! (Must be between 1 and " << totalLines << ")" << endl;
    } else {
        cout << "\n--- Displaying " << n << " lines starting from line " << m << " ---" << endl;
        int count = 0;
        for (int i = startIdx; i < totalLines && count < n; i++, count++) {
            cout << "Line " << (i + 1) << ": " << lines[i] << endl;
        }
    }

    return 0;
}

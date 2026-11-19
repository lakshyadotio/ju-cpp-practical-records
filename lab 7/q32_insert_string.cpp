#include <iostream>
#include <string>
using namespace std;

int main() {
    string mainText, subStr;
    size_t pos;

    cout << "Enter the main text: ";
    getline(cin, mainText);

    cout << "Enter the string to insert: ";
    getline(cin, subStr);

    cout << "Enter the position (0-indexed) where you want to insert: ";
    cin >> pos;

    if (pos > mainText.length()) {
        cout << "Invalid position! Position should be between 0 and " << mainText.length() << "." << endl;
    } else {
        mainText.insert(pos, subStr);
        cout << "Modified text: " << mainText << endl;
    }

    return 0;
}

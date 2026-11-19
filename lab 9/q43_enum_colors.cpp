// Question 42: Write a program to display the names of colors using enumerated types.
#include <iostream>
#include <string>
using namespace std;

enum Color {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    ORANGE,
    PURPLE,
    WHITE,
    BLACK
};

string getColorName(Color c) {
    switch (c) {
        case RED:    return "Red";
        case GREEN:  return "Green";
        case BLUE:   return "Blue";
        case YELLOW: return "Yellow";
        case ORANGE: return "Orange";
        case PURPLE: return "Purple";
        case WHITE:  return "White";
        case BLACK:  return "Black";
        default:     return "Unknown";
    }
}

int main() {
    cout << "--- Color Enumeration List ---" << endl;
    for (int c = RED; c <= BLACK; c++) {
        cout << "Enum Value: " << c << " -> Color Name: " << getColorName(static_cast<Color>(c)) << endl;
    }

    int choice;
    cout << "\nEnter a color code (0-7): ";
    cin >> choice;

    if (choice >= RED && choice <= BLACK) {
        cout << "Selected color: " << getColorName(static_cast<Color>(choice)) << endl;
    } else {
        cout << "Invalid color code!" << endl;
    }

    return 0;
}

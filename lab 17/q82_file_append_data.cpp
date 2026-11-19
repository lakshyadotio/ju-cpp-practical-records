// Question 81: Write a program to append data to an existing file in C++.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Open in append mode (ios::app)
    ofstream appendFile("students_log.txt", ios::app);

    if (!appendFile) {
        cerr << "Error opening file for appending!" << endl;
        return 1;
    }

    appendFile << "Status: Lab practical completed and verified." << endl;
    appendFile << "Date: 01/10/2026" << endl;

    appendFile.close();
    cout << "New record appended successfully to 'students_log.txt'." << endl;

    // Display entire updated file
    cout << "\n--- Updated File Contents ---" << endl;
    ifstream readUpdated("students_log.txt");
    string line;
    while (getline(readUpdated, line)) {
        cout << line << endl;
    }
    readUpdated.close();

    return 0;
}

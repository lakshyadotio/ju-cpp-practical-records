// Question 83: Write a program to detect the end-of-file while reading a file in C++.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Create sample data file
    ofstream out("eof_demo.txt");
    out << "Alpha\nBeta\nGamma\nDelta\n";
    out.close();

    ifstream in("eof_demo.txt");
    if (!in) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    string word;
    int count = 0;

    cout << "Reading file until EOF is detected:" << endl;
    while (in >> word) {
        count++;
        cout << "Read word #" << count << ": " << word << endl;
    }

    // Check EOF flag
    if (in.eof()) {
        cout << "\nEOF (End Of File) reached successfully after " << count << " words." << endl;
    }

    in.close();
    return 0;
}

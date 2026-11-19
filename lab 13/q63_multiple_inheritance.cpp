// Question 62: Write a program to implement multiple inheritance in C++.
#include <iostream>
using namespace std;

// Base Class 1
class AcademicDetails {
protected:
    float theoryMarks;
    float practicalMarks;

public:
    void getAcademicMarks(float t, float p) {
        theoryMarks = t;
        practicalMarks = p;
    }
};

// Base Class 2
class SportsDetails {
protected:
    float sportsScore;

public:
    void getSportsScore(float s) {
        sportsScore = s;
    }
};

// Derived Class inheriting from both AcademicDetails and SportsDetails
class StudentReport : public AcademicDetails, public SportsDetails {
public:
    void displayTotalScore() const {
        float total = theoryMarks + practicalMarks + sportsScore;
        cout << "\n--- Student Performance Evaluation ---" << endl;
        cout << "Theory Marks:    " << theoryMarks << endl;
        cout << "Practical Marks: " << practicalMarks << endl;
        cout << "Sports Score:    " << sportsScore << endl;
        cout << "Total Score:     " << total << " / 250" << endl;
        cout << "Overall Grade:   " << (total >= 200 ? "A+" : (total >= 150 ? "A" : "B")) << endl;
    }
};

int main() {
    StudentReport report;
    float t, p, s;
    cout << "Enter Theory Marks (out of 100): ";
    cin >> t;
    cout << "Enter Practical Marks (out of 50): ";
    cin >> p;
    cout << "Enter Sports Score (out of 100): ";
    cin >> s;

    report.getAcademicMarks(t, p);
    report.getSportsScore(s);
    report.displayTotalScore();

    return 0;
}

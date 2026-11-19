// Question 66: Write a program to implement hybrid inheritance in C++.
#include <iostream>
#include <string>
using namespace std;

// Base class
class Student {
protected:
    int rollNo;
    string name;

public:
    void getStudent(int r, string n) {
        rollNo = r;
        name = n;
    }

    void putStudent() const {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name:    " << name << endl;
    }
};

// Single inheritance from Student
class Exam : public Student {
protected:
    float mark1, mark2;

public:
    void getMarks(float m1, float m2) {
        mark1 = m1;
        mark2 = m2;
    }

    void putMarks() const {
        cout << "Mark 1:  " << mark1 << endl;
        cout << "Mark 2:  " << mark2 << endl;
    }
};

// Independent class
class Sports {
protected:
    float sportsScore;

public:
    void getSportsScore(float s) {
        sportsScore = s;
    }

    void putScore() const {
        cout << "Sports:  " << sportsScore << endl;
    }
};

// Multiple inheritance combining Exam and Sports (Forming Hybrid Inheritance)
class Result : public Exam, public Sports {
public:
    void displayResult() const {
        cout << "\n================ Final Result ================" << endl;
        putStudent();
        putMarks();
        putScore();
        float total = mark1 + mark2 + sportsScore;
        cout << "----------------------------------------------" << endl;
        cout << "Total Score: " << total << " / 250" << endl;
        cout << "Result:      " << (total >= 100 ? "PASSED" : "FAILED") << endl;
    }
};

int main() {
    Result res;
    res.getStudent(42, "Kavita Rao");
    res.getMarks(85.5, 91.0);
    res.getSportsScore(45.0);
    res.displayResult();

    return 0;
}

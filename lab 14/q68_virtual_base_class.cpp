// Question 67: Write a program to implement a virtual base class to resolve ambiguity in diamond-shaped inheritance.
#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;

public:
    void setName(string n) { name = n; }
    void printName() const { cout << "Person Name: " << name << endl; }
};

// Virtual inheritance avoids duplicate copies of Person in Result
class Academics : virtual public Person {
protected:
    float academicScore;

public:
    void setAcademicScore(float s) { academicScore = s; }
};

class Athletics : virtual public Person {
protected:
    float athleticsScore;

public:
    void setAthleticsScore(float s) { athleticsScore = s; }
};

// Derived class inheriting Academics and Athletics (Diamond shape)
class StudentReport : public Academics, public Athletics {
public:
    void showReport() const {
        // Direct unambiguous access to name due to virtual base class
        printName();
        cout << "Academic Score:  " << academicScore << endl;
        cout << "Athletics Score: " << athleticsScore << endl;
        cout << "Combined Score:  " << (academicScore + athleticsScore) << endl;
    }
};

int main() {
    StudentReport report;
    report.setName("Mohit");
    report.setAcademicScore(95.0);
    report.setAthleticsScore(88.0);

    cout << "--- Diamond Inheritance with Virtual Base Class ---" << endl;
    report.showReport();

    return 0;
}

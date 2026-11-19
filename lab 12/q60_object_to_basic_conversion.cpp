// Question 59: Write a program to implement object-to-basic type conversion in C++.
#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    Time(int h = 0, int m = 0) : hours(h), minutes(m) {}

    void display() const {
        cout << hours << " Hour(s) and " << minutes << " Minute(s)" << endl;
    }

    // Object-to-basic type conversion using casting operator
    operator int() const {
        return (hours * 60) + minutes;
    }
};

int main() {
    int h, m;
    cout << "Enter hours: ";
    cin >> h;
    cout << "Enter minutes: ";
    cin >> m;

    Time t(h, m);
    cout << "Time Object: ";
    t.display();

    // Object type (Time) converted to Basic type (int)
    int totalMinutes = t;

    cout << "Converted to Basic Type (Total Minutes): " << totalMinutes << " mins" << endl;

    return 0;
}

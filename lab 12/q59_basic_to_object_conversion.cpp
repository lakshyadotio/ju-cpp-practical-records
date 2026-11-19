// Question 58: Write a program to implement basic-to-object type conversion in C++.
#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    Time() : hours(0), minutes(0) {}

    // Basic-to-object type conversion constructor (int minutes -> Time object)
    Time(int totalMinutes) {
        hours = totalMinutes / 60;
        minutes = totalMinutes % 60;
    }

    void display() const {
        cout << hours << " Hour(s) and " << minutes << " Minute(s)" << endl;
    }
};

int main() {
    int totalMinutes;
    cout << "Enter time duration in total minutes: ";
    cin >> totalMinutes;

    // Basic type (int) converted to Object type (Time) via constructor
    Time t = totalMinutes;

    cout << "Converted Time Object: ";
    t.display();

    return 0;
}

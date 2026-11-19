// Question 53: Write a program to demonstrate type conversion using a distance class.
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0f) {}

    Distance(int f, float in) : feet(f), inches(in) {}

    // Basic to Object conversion (Constructor conversion: meters to Distance)
    Distance(float meters) {
        float totalInches = meters * 39.3701f;
        feet = static_cast<int>(totalInches / 12);
        inches = totalInches - (feet * 12);
    }

    // Object to Basic conversion (Casting operator: Distance to meters)
    operator float() const {
        float totalInches = (feet * 12) + inches;
        return totalInches / 39.3701f;
    }

    void display() const {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    float m = 2.5f;
    cout << "Basic type value (meters): " << m << " m" << endl;

    // Basic to Object conversion
    Distance d = m;
    cout << "Converted to Distance object: ";
    d.display();

    // Object to Basic conversion
    float backToMeters = d;
    cout << "Converted back to meters: " << backToMeters << " m" << endl;

    return 0;
}

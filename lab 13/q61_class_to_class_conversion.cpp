// Question 60: Write a program to implement class-to-class type conversion in C++.
#include <iostream>
using namespace std;

// Forward declaration of Fahrenheit
class Fahrenheit;

class Celsius {
private:
    float tempC;

public:
    Celsius(float c = 0.0f) : tempC(c) {}

    float getTemp() const { return tempC; }

    void display() const {
        cout << tempC << " deg C" << endl;
    }
};

class Fahrenheit {
private:
    float tempF;

public:
    Fahrenheit(float f = 32.0f) : tempF(f) {}

    // Conversion constructor: takes Celsius object and initializes Fahrenheit
    Fahrenheit(const Celsius &c) {
        tempF = (c.getTemp() * 9.0f / 5.0f) + 32.0f;
    }

    void display() const {
        cout << tempF << " deg F" << endl;
    }
};

int main() {
    float degC;
    cout << "Enter temperature in Celsius: ";
    cin >> degC;

    Celsius c(degC);
    cout << "Celsius Object:    ";
    c.display();

    // Class-to-class conversion
    Fahrenheit f = c;

    cout << "Fahrenheit Object: ";
    f.display();

    return 0;
}

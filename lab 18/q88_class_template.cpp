// Question 87: Write a program to implement a class template in C++.
#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Pair {
private:
    T first;
    T second;

public:
    Pair(T f, T s) : first(f), second(s) {}

    T getFirst() const { return first; }
    T getSecond() const { return second; }

    T getMax() const {
        return (first > second) ? first : second;
    }

    void display() const {
        cout << "Pair: (" << first << ", " << second << ") | Max: " << getMax() << endl;
    }
};

int main() {
    Pair<int> intPair(15, 29);
    intPair.display();

    Pair<float> floatPair(34.5f, 21.8f);
    floatPair.display();

    Pair<string> stringPair("Delhi", "Jaipur");
    stringPair.display();

    return 0;
}

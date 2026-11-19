// Question 68: Write a program to demonstrate function overriding in C++.
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void makeSound() {
        cout << "Generic animal sound" << endl;
    }
};

// Derived class overriding makeSound()
class Dog : public Animal {
public:
    void makeSound() {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};

// Derived class overriding makeSound()
class Cat : public Animal {
public:
    void makeSound() {
        cout << "Cat meows: Meow! Meow!" << endl;
    }
};

int main() {
    Animal generic;
    Dog dog;
    Cat cat;

    cout << "Base class object sound:     ";
    generic.makeSound();

    cout << "Derived Dog object sound:    ";
    dog.makeSound(); // Overridden function called

    cout << "Derived Cat object sound:    ";
    cat.makeSound(); // Overridden function called

    // Invoking base version explicitly using scope resolution
    cout << "Explicit base call via Dog:  ";
    dog.Animal::makeSound();

    return 0;
}

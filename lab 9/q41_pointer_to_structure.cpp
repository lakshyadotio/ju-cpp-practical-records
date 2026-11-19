// Question 40: Write a program using a pointer to a structure to initialize its members.
#include <iostream>
#include <string>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    float price;
};

int main() {
    Book b;
    Book *ptr = &b; // Pointer to structure

    cout << "Enter Book ID: ";
    cin >> ptr->id;
    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin, ptr->title);

    cout << "Enter Author Name: ";
    getline(cin, ptr->author);

    cout << "Enter Price: ";
    cin >> ptr->price;

    cout << "\n--- Book Details (accessed via pointer) ---" << endl;
    cout << "Book ID: " << ptr->id << endl;
    cout << "Title:   " << ptr->title << endl;
    cout << "Author:  " << ptr->author << endl;
    cout << "Price:   $" << ptr->price << endl;

    return 0;
}

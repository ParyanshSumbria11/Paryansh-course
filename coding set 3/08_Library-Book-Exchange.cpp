#include <iostream>
using namespace std;

class Book {
    int bookID;
    string title;
    int copies;

public:
    void input() {
        cout << "Enter Book ID: ";
        cin >> bookID;

        cout << "Enter Title: ";
        cin >> title;

        cout << "Enter Number of Copies: ";
        cin >> copies;
    }

    int getCopies() {
        return copies;
    }

    void exchange(Book &other) {
        int tempID;
        string tempTitle;
        int tempCopies;

        tempID = bookID;
        bookID = other.bookID;
        other.bookID = tempID;

        tempTitle = title;
        title = other.title;
        other.title = tempTitle;

        tempCopies = copies;
        copies = other.copies;
        other.copies = tempCopies;
    }

    void display() {
        cout << "Book ID: " << bookID << endl;
        cout << "Title: " << title << endl;
        cout << "Copies: " << copies << endl;
    }
};

Book moreCopies(Book b1, Book b2) {
    if (b1.getCopies() > b2.getCopies())
        return b1;
    else
        return b2;
}

int main() {
    Book b1, b2;

    cout << "Enter details of Book 1:" << endl;
    b1.input();

    cout << "\nEnter details of Book 2:" << endl;
    b2.input();

    Book result = moreCopies(b1, b2);

    cout << "\nBook with more copies:" << endl;
    result.display();

    cout << "\nExchanging books..." << endl;

    b1.exchange(b2);

    cout << "\nBook 1 after exchange:" << endl;
    b1.display();

    cout << "\nBook 2 after exchange:" << endl;
    b2.display();

    return 0;
}
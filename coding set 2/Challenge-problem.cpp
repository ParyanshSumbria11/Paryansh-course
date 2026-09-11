#include <iostream>
#include <string>
using namespace std;

class Library {
private:
    string title;
    string author;
    int bookID;

public:
    Library() {
        title = "";
        author = "";
        bookID = 0;
    }

    Library(string t, string a, int id) {
        title = t;
        author = a;
        bookID = id;
    }

    string getTitle() {
        return title;
    }

    void displayDetails() {
        cout << "Book ID: " << bookID << endl;
        cout << "Title  : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {
    
    Library books[10] = {
        Library("The C++ Programming Language", "Bjarne Stroustrup", 101),
        Library("Data Structures", "Mark Allen", 102),
        Library("Operating Systems", "Silberschatz", 103),
        Library("Computer Networks", "Tanenbaum", 104),
        Library("Algorithms", "Cormen", 105),
        Library("Clean Code", "Robert Martin", 106),
        Library("Design Patterns", "Erich Gamma", 107),
        Library("Database Concepts", "Korth", 108),
        Library("Artificial Intelligence", "Russell", 109),
        Library("Theory of Computation", "Sipser", 110)
    };

    
    string searchTitle;
    cout << "Enter book title to search: ";
    getline(cin, searchTitle);

    bool found = false;
    cout << "\nSearch Results:\n";
    for (int i = 0; i < 10; i++) {
        if (books[i].getTitle() == searchTitle) {
            books[i].displayDetails();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No book found with title: \"" << searchTitle << "\"" << endl;
    }

    return 0;
}
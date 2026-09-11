#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;

public:
    
    Book(string t, string a) {
        title = t;
        author = a;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main() {
    Book b1("Attack On Titan", "Hajime Isayama");
    b1.display();
    return 0;
}
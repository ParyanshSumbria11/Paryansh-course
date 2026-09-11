
#include <iostream>
using namespace std;

class Rectangle {
    int length;
    int width;

public:
    Rectangle(int l = 0, int w = 0) {
        length = l;
        width = w;
    }

    void input() {
        cout << "Enter Length: ";
        cin >> length;

        cout << "Enter Width: ";
        cin >> width;
    }

    bool equalArea(Rectangle r) {
        return (length * width == r.length * r.width);
    }

    int getLength() {
        return length;
    }

    int getWidth() {
        return width;
    }

    void display() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }
};

Rectangle merge(Rectangle r1, Rectangle r2) {
    return Rectangle(
        r1.getLength() + r2.getLength(),
        r1.getWidth() + r2.getWidth()
    );
}

int main() {
    Rectangle r1, r2, r3;

    cout << "Enter first rectangle:" << endl;
    r1.input();

    cout << "\nEnter second rectangle:" << endl;
    r2.input();

    if (r1.equalArea(r2))
        cout << "\nBoth rectangles have equal area." << endl;
    else
        cout << "\nBoth rectangles do not have equal area." << endl;

    r3 = merge(r1, r2);

    cout << "\nMerged Rectangle:" << endl;
    r3.display();

    return 0;
}
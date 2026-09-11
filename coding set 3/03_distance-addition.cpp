#include <iostream>
using namespace std;

class Distance {
    int feet;
    int inches;

public:
    void input() {
        cout << "Enter feet: ";
        cin >> feet;

        cout << "Enter inches: ";
        cin >> inches;
    }

    Distance add(Distance d) {
        Distance temp;

        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;

        if (temp.inches >= 12) {
            temp.feet = temp.feet + 1;
            temp.inches = temp.inches - 12;
        }

        return temp;
    }

    void display() {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    Distance d1, d2, total;

    cout << "Enter first distance:" << endl;
    d1.input();

    cout << "\nEnter second distance:" << endl;
    d2.input();

    total = d1.add(d2);

    cout << "\nTotal Distance: ";
    total.display();

    return 0;
}
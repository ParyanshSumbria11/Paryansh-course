#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;

public:
    void setData(string n, int r) {
        name = n;
        rollNo = r;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s1;
    s1.setData("Paryansh Sumbria", 11);
    s1.displayData();
    return 0;
}
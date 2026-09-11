#include <iostream>
using namespace std;

class Result {
    int rollNumber;
    int marks[5];

public:
    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter marks of 5 subjects:" << endl;

        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    int totalMarks() {
        int total = 0;

        for (int i = 0; i < 5; i++) {
            total = total + marks[i];
        }

        return total;
    }

    void compare(Result r) {
        if (totalMarks() > r.totalMarks())
            cout << "First student has higher marks." << endl;
        else if (totalMarks() < r.totalMarks())
            cout << "Second student has higher marks." << endl;
        else
            cout << "Both students have equal marks." << endl;
    }

    Result graceMarks() {
        Result temp;

        temp.rollNumber = rollNumber;

        int totalGrace = 0;

        for (int i = 0; i < 5; i++) {
            temp.marks[i] = marks[i];

            if (temp.marks[i] < 40 && totalGrace < 20) {
                temp.marks[i] = temp.marks[i] + 5;
                totalGrace = totalGrace + 5;
            }
        }

        return temp;
    }

    int getTotal() {
        return totalMarks();
    }

    void display() {
        cout << "Roll Number: " << rollNumber << endl;

        cout << "Marks: ";

        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }

        cout << endl;

        cout << "Total Marks: " << totalMarks() << endl;
    }
};

Result topper(Result r1, Result r2, Result r3) {
    Result top = r1;

    if (r2.getTotal() > top.getTotal())
        top = r2;

    if (r3.getTotal() > top.getTotal())
        top = r3;

    return top;
}

int main() {
    Result r1, r2, r3;

    cout << "Enter details of Student 1:" << endl;
    r1.input();

    cout << "\nEnter details of Student 2:" << endl;
    r2.input();

    cout << "\nEnter details of Student 3:" << endl;
    r3.input();

    cout << "\nComparison of Student 1 and Student 2:" << endl;
    r1.compare(r2);

    Result top = topper(r1, r2, r3);

    cout << "\nTopper:" << endl;
    top.display();

    Result revised = r1.graceMarks();

    cout << "\nStudent 1 after grace marks:" << endl;
    revised.display();

    return 0;
}
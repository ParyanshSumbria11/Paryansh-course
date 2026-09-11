#include <iostream>
using namespace std;

class Employee {
    string name;
    double salary;

public:
    void input() {
        cout << "Enter Name: ";
         cin>> name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    double getSalary() {
        return salary;
    }

    Employee incrementSalary() {
        Employee temp;

        temp.name = name;
        temp.salary = salary + (salary * 10 / 100);

        return temp;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

Employee highestSalary(Employee e[], int n) {
    Employee highest = e[0];

    for (int i = 1; i < n; i++) {
        if (e[i].getSalary() > highest.getSalary())
            highest = e[i];
    }

    return highest;
}

int main() {
    Employee employees[3];

    for (int i = 0; i < 3; i++) {
        cout << "\nEnter details of Employee " << i + 1 << ":" << endl;
        employees[i].input();
    }

    Employee highest = highestSalary(employees, 3);

    cout << "\nEmployee with highest salary:" << endl;
    highest.display();

    cout << "\nAfter 10% salary increment:" << endl;

    Employee revised = highest.incrementSalary();
    revised.display();

    return 0;
}
#include <iostream>
using namespace std;

class Employee
{
protected:
    int id;
    string name;

public:
    Employee(int i, string n)
    {
        id = i;
        name = n;
    }
};

class Manager : public Employee
{
private:
    string department;
    float salary;

public:
    Manager(int i, string n, string d, float s)
        : Employee(i, n)
    {
        department = d;
        salary = s;
    }

    void display()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
        cout << "----------------------" << endl;
    }
};

int main()
{
    Manager m[5] =
    {                                                             
        Manager(101, "Rahul", "IT", 50000),
        Manager(102, "Aman", "HR", 45000),
        Manager(103, "Rohit", "Finance", 55000),
        Manager(104, "Vikas", "IT", 60000),
        Manager(105, "Karan", "Marketing", 48000)
    };

    for(int i = 0; i < 5; i++)
    {
        m[i].display();
    }

    return 0;
}
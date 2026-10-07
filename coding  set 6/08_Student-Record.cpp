#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int roll, marks;
    string name;

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Name: ";
    cin.ignore();
    getline(cin ,name);
  
    cout << "Enter Marks: ";
    cin >> marks;

    ofstream file("students.txt");

    file << roll << " " << name << " " << marks << endl;

    file.close();

    cout << "Student record saved successfully.";

    return 0;
}
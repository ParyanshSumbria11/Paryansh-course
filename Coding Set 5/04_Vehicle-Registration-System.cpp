#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string registrationNumber;
    string company;

public:
    Vehicle(string r, string c)
    {
        registrationNumber = r;
        company = c;
    }
};

class Car : public Vehicle
{
private:
    string fuelType;
    int engineCapacity;

public:
    Car(string r, string c, string f, int e)
        : Vehicle(r, c)
    {
        fuelType = f;
        engineCapacity = e;
    }

    void display()
    {
        cout << "Car Details" << endl;
        cout << "Registration Number: " << registrationNumber << endl;
        cout << "Company: " << company << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
        cout << "----------------------" << endl;
    }
};

class Bike : public Vehicle
{
private:
    string fuelType;
    int engineCapacity;

public:
    Bike(string r, string c, string f, int e)
        : Vehicle(r, c)
    {
        fuelType = f;
        engineCapacity = e;
    }

    void display()
    {
        cout << "Bike Details" << endl;
        cout << "Registration Number: " << registrationNumber << endl;
        cout << "Company: " << company << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
        cout << "----------------------" << endl;
    }
};

int main()
{
    Car c("JK02AB1234", " HUMMER H2", "Petrol",1500);
    Bike b("JK02CD5678", "YEZDI ROADSTER", "Petrol", 334);

    c.display();
    b.display();

    return 0;
}
    
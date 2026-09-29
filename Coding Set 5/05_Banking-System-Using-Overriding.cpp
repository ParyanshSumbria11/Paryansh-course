#include <iostream>
using namespace std;

class Account
{
protected:
    int accountNumber;
    float balance;

public:
    Account(int a, float b)
    {
        accountNumber = a;
        balance = b;
    }

    virtual void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public Account
{
public:
    SavingsAccount(int a, float b)
        : Account(a, b)
    {
    }

    void display()
    {
        cout << "Savings Account" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

class CurrentAccount : public Account
{
public:
    CurrentAccount(int a, float b)
        : Account(a, b)
    {
    }

    void display()
    {
        cout << "Current Account" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    SavingsAccount s(101, 25000);

    CurrentAccount c(102, 50000);

    s.display();
    cout << endl;

    c.display();

    return 0;
}
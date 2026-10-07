#include <iostream>
using namespace std;

class NotEligible
{
};

int main()
{
    int age;

    cout << "Enter age: ";
    cin >> age;

    try
    {
        if (age < 18)
        {
            throw NotEligible();
        }

        cout << "Eligible to vote.";
    }
    catch (NotEligible)
    {
        cout << "Exception: Not eligible for voting.";
    }

    return 0;
}
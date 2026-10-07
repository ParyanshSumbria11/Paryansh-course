#include <iostream>
using namespace std;

class BankAccount
{
    int balance;

public:
    BankAccount(int b)
    {
        balance = b;
    }

    void withdraw(int amount)
    {
        try
        {
            if (amount > balance)
            {
                throw amount;
            }

            balance = balance - amount;

            cout << "Withdrawal successful." << endl;
            cout << "Remaining Balance: " << balance;
        }
        catch (int)
        {
            cout << "Error: Insufficient Balance.";
        }
    }
};

int main()
{
    int balance, amount;

    cout << "Balance: ";
    cin >> balance;

    cout << "Withdraw: ";
    cin >> amount;

    BankAccount account(balance);

    account.withdraw(amount);

    return 0;
}
#include <iostream>
using namespace std;

class BankAccount {
    int accountNumber;
    double balance;

public:
    void input() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Balance: ";
        cin >> balance;
    }

    void transfer(BankAccount &receiver, double amount) {
        if (balance >= amount) {
            balance = balance - amount;
            receiver.balance = receiver.balance + amount;

            cout << "Transfer successful!" << endl;
        }
        else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account1, account2;

    cout << "Enter details of Account 1:" << endl;
    account1.input();

    cout << "\nEnter details of Account 2:" << endl;
    account2.input();

    double amount;

    cout << "\nEnter amount to transfer: ";
    cin >> amount;

    account1.transfer(account2, amount);

    cout << "\nAccount 1:" << endl;
    account1.display();

    cout << "\nAccount 2:" << endl;
    account2.display();

    return 0;
}
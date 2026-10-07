#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;

    cout << "Enter expression: ";
    cin >> a >> op >> b;

    try
    {
        if (op == '+')
        {
            cout << "Result = " << a + b;
        }
        else if (op == '-')
        {
            cout << "Result = " << a - b;
        }
        else if (op == '*')
        {
            cout << "Result = " << a * b;
        }
        else if (op == '/')
        {
            if (b == 0)
            {
                throw 0;
            }

            cout << "Result = " << a / b;
        }
        else
        {
            throw op;
        }
    }

    catch (int)
    {
        cout << "Division by Zero Error.";
    }

    catch (char)
    {
        cout << "Invalid Operator.";
    }

    return 0;
}
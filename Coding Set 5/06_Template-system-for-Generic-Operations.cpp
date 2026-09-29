#include <iostream>
using namespace std;

template <class T>
T larger(T a, T b)
{
    if(a > b)
        return a;
    else
        return b;
}

template <class T>
void swapValues(T &a, T &b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
}

int main()
{
    cout << "Larger Integer: "
         << larger(10, 20) << endl;

    cout << "Larger Float: "
         << larger(10.5f, 20.5f) << endl;

    cout << "Larger Double: "
         << larger(10.25, 20.75) << endl;

    cout << "Larger Character: "
         << larger('A', 'Z') << endl;

    int a = 10, b = 20;

    cout << endl;
    cout << "Before Swap: " << a << " " << b << endl;

    swapValues(a, b);

    cout << "After Swap: " << a << " " << b << endl;

    return 0;
}
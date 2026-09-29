#include <iostream>
using namespace std;

template <class T>
class Array
{
private:
    T arr[5];

public:
    void input()
    {
        cout << "Enter 5 elements:" << endl;

        for(int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }
    }

    void display()
    {
        cout << "Array elements: ";

        for(int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    T largest()
    {
        T max = arr[0];

        for(int i = 1; i < 5; i++)
        {
            if(arr[i] > max)
                max = arr[i];
        }

        return max;
    }

    T smallest()
    {
        T min = arr[0];

        for(int i = 1; i < 5; i++)
        {
            if(arr[i] < min)
                min = arr[i];
        }

        return min;
    }
};

int main()
{
    Array<int> a;

    cout << "Integer Array" << endl;

    a.input();
    a.display();

    cout << "Largest: " << a.largest() << endl;
    cout << "Smallest: " << a.smallest() << endl;

    cout << endl;

    Array<float> b;

    cout << "Float Array" << endl;

    b.input();
    b.display();

    cout << "Largest: " << b.largest() << endl;
    cout << "Smallest: " << b.smallest() << endl;

    return 0;
}
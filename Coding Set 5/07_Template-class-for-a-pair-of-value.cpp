#include <iostream>
using namespace std;

template <class T>
class Pair
{
private:
    T a, b;

public:
    Pair(T x, T y)
    {
        a = x;
        b = y;
    }

    T maximum()
    {
        if(a > b)
            return a;
        else
            return b;
    }

    T minimum()
    {
        if(a < b)
            return a;
        else
            return b;
    }

    void display()
    {
        cout << "Maximum: " << maximum() << endl;
        cout << "Minimum: " << minimum() << endl;
    }
};

int main()
{
    Pair<int> p1(10, 20);

    cout << "Integer Values:" << endl;
    p1.display();

    Pair<float> p2(10.5, 5.5);

    cout << endl;
    cout << "Floating Point Values:" << endl;
    p2.display();

    return 0;
}
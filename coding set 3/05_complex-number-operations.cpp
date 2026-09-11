#include <iostream>
using namespace std;

class Complex {
    int real;
    int imag;

public:
    void input() {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    Complex add(Complex c) {
        Complex temp;

        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }

    Complex multiply(Complex c) {
        Complex temp;

        temp.real = (real * c.real) - (imag * c.imag);
        temp.imag = (real * c.imag) + (imag * c.real);

        return temp;
    }

    int getReal() {
        return real;
    }

    int getImag() {
        return imag;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex subtract(Complex c1, Complex c2) {
    Complex temp;

    

    return Complex();
}

int main() {
    Complex c1, c2, sum, product;

    cout << "Enter first complex number:" << endl;
    c1.input();

    cout << "\nEnter second complex number:" << endl;
    c2.input();

    sum = c1.add(c2);
    product = c1.multiply(c2);

    cout << "\nAddition: ";
    sum.display();

    cout << "Multiplication: ";
    product.display();

    return 0;
}
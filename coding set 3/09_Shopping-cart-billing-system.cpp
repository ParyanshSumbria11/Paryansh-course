#include <iostream>
using namespace std;

class Product {
    string name;
    double price;
    int quantity;

public:
    void input() {
        cout << "Enter Product Name: ";
        cin >> name;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    double totalValue() {
        return price * quantity;
    }

    Product combine(Product p) {
        Product temp;

        temp.name = name + "_" + p.name;
        temp.price = price;
        temp.quantity = quantity + p.quantity;

        return temp;
    }

    void display() {
        cout << "Product Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Value: " << price * quantity << endl;
    }
};

Product higherValue(Product p1, Product p2) {
    if (p1.totalValue() > p2.totalValue())
        return p1;
    else
        return p2;
}

int main() {
    Product p1, p2, higher, combined;

    cout << "Enter details of Product 1:" << endl;
    p1.input();

    cout << "\nEnter details of Product 2:" << endl;
    p2.input();

    higher = higherValue(p1, p2);

    cout << "\nProduct with higher total value:" << endl;
    higher.display();

    combined = p1.combine(p2);

    cout << "\nCombined Inventory:" << endl;
    combined.display();

    return 0;
}
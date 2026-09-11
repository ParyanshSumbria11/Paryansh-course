#include <iostream>
using namespace std;

int main() {
    int n, number;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> number;

    for (int i = 0; i < n; i++) {
        if (arr[i] == number) {
            cout << "Found at index: " << i << endl;
            return 0;
        }
    }

    cout << "Element not found" << endl;
    return 0;
}
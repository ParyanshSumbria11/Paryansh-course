#include <iostream>
using namespace std;

int main() {
    int n, number, count = 0;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to count: ";
    cin >> number;

    for (int i = 0; i < n; i++) {
        if (arr[i] == number) {
            count++;
        }
    }

    cout << "Count: " << count << endl;
    return 0;
}
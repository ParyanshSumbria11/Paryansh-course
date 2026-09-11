#include <iostream>
using namespace std;

int main() {
    int n, target;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];

    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target element: ";
    cin >> target;

    int low = 0;
    int high = n - 1;
    int foundIndex = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            foundIndex = mid;
            break;
        }

        if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (foundIndex != -1) {
        cout << "Found at index: " << foundIndex << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}
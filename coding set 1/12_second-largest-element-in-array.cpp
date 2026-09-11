#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    
    int secondLargest = -1; 
    for (int i = 0; i < n; i++) {
        if ((arr[i] != largest) && (arr[i] > secondLargest)) {
            secondLargest = arr[i];
        }
    }

    cout << "Second Largest: " << secondLargest << endl;
    return 0;
}
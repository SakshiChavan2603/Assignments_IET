#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    if (n < 2) {
        cout << "Array must have at least 2 elements." << endl;
        return 0;
    }

    int arr[100]; // limit for simplicity
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int first, second;

    // Initialize first and second
    if (arr[0] > arr[1]) {
        first = arr[0];
        second = arr[1];
    } else {
        first = arr[1];
        second = arr[0];
    }

    // Traverse remaining elements
    for (int i = 2; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (first == second) {
        cout << "No second largest element (all elements are equal)." << endl;
    } else {
        cout << "The second largest element is: " << second << endl;
    }

    return 0;
}

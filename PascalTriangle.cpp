#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // Print spaces for alignment
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        int num = 1; // first number in every row is 1
        for (int j = 0; j <= i; j++) {
            cout << num << " ";
            // Update value using formula: C(n, k) = C(n, k-1) * (n-k+1)/k
            num = num * (i - j) / (j + 1);
        }
        cout << endl;
    }

    return 0;
}

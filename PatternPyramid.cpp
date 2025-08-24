#include<iostream>
using namespace std;


int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Increasing numbers
        int num = i;
        for (int j = 1; j <= i; j++) {
            cout << num;
            num++;
        }

        // Decreasing numbers
        num -= 2; // step back
        for (int j = 1; j < i; j++) {
            cout << num;
            num--;
        }

        cout << endl;
    }

    return 0;
}

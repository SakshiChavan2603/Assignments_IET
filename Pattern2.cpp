#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    char ch = 'A';  // starting alphabet

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
        }
        ch++; // move to next alphabet
        cout << endl;
    }

    return 0;
}

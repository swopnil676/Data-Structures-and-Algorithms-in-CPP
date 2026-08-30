#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 0) {
        cout << "Not a power of 2";
        return 0;
    }

    while (n > 1) {
        if (n % 2 != 0) {
            cout << "Not a power of 2";
            return 0;
        }
        n = n / 2; // for continue the process
    }
    cout << "It is a power of 2";
    return 0;
}
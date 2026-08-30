#include <iostream>
using namespace std;

int reverseNumber(int num) {
    int reversed = 0;

    while (num > 0) {
        int lastdigit = num % 10;              // Get last digit
        reversed = reversed * 10 + lastdigit; // Add digit to reversed number
        num /= 10;                           // Remove last digit
    }
    return reversed;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Reversed number: " << reverseNumber(n);

    return 0;
}

/*
| Step | num  | lastdigit | reversed |
| ---- | ---- | --------- | -------- |
| 1    | 1234 | 4         | 4        |
| 2    | 123  | 3         | 43       |
| 3    | 12   | 2         | 432      |
| 4    | 1    | 1         | 4321     |
*/

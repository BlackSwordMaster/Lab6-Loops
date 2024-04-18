#include <iostream>
using namespace std;

int main() {
    int n;
    int digitCount = 0;

    // Request an integer value with at least three digits
    do {
        cout << "Enter a value for n (at least three digits): ";
        cin >> n;
    } while (n < 100);  // Continue prompting until the condition is met

    // Count the number of digits
    while (n > 0) {
        n /= 10;  // Remove the last digit
        digitCount++;
    }

    cout << digitCount << " digits" << endl;

    return 0;
}

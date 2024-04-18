#include <iostream>
using namespace std;

int main(){
    int n;

    do{
        cout << "Enter a value for n: ";
        cin >> n;
    }while(n < 100);

    // Print each digit in reverse order
    while (n > 0) {
        int digit = n % 10;  // Extract the last digit
        cout << digit << endl;
        cout << "before" << n << endl;
        n /= 10;  // Remove the last digit
        cout << "after" << n << endl;
    }


    return 0;
}
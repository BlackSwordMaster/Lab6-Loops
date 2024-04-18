#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a value for n: ";
    cin >> n;

    int lastdigit = n%10;
    int middledigit = (n/10)%10;
    int firstdigit = n/100;

    cout << lastdigit << middledigit << firstdigit << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter a 3 digit integer: ";
    cin >> n;

     int last = n%10; 
     int midlle = (n/10)%10; 
     int first = n/100;

     cout << last << " " << (n % last == 0 ? 1 : 0) << endl;
     cout << midlle << " " << (n % midlle == 0 ? 1 : 0) << endl;
     cout << first << " " << (n % first == 0 ? 1 : 0) << endl;
    return 0;
}
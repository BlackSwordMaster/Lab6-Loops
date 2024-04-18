//Ian Lin
#include <iostream>
using namespace std;

int main(){
    int i;

    cout << "Enter a value greater then 10: ";
    cin >> i;

    while(i<10){
        cout << "Enter a value greater then 10: ";
        cin >> i;
    }

    cout << i << " is valid" << endl;


    return 0;
}
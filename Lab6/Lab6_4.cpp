//Ian Lin
#include <iostream>
using namespace std;

int main(){
    int i;

    do{
        cout << "Enter a value for x that is greater then 10: ";
        cin >> i;

         if(i<=10){
            cout << i << " isn't valid" << endl;
            
        }
    }while(i<=10);{
        cout << i << " is  valid" << endl;
    }

    return 0;
}
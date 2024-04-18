//Ian Lin
#include <iostream>
using namespace std;

int main(){
    int option = 0;

    cout << endl;

    while(option!=3){
        cout << "\nVending Machine" << endl;
        cout << "1) coke" << endl;
        cout << "2) water" << endl;
        cout << "3) off" << endl;
        cout << "Select: ";
        cin >> option;
    
        if(option==1)
            cout << "\nyou selected a coke\n";
        else if(option==2)
            cout << "\nyou selected a water\n";
        else if(option==3)
            cout << "\nprogramming ending\n";
        else
            cout << "\nInvalid\n";
    }
        
            


    return 0;
}
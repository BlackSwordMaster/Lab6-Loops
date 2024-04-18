#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter a value for n: ";
    cin >> n;

    for(int i = 0;i<n;i++){
        if(n%i==0){//until 1 is greater or equal to n we add 1 and then it checks if that number is a factor of it and prints it out if it is
            cout << i << " ";
        }
    
    }
    cout << endl;
    return 0;
}
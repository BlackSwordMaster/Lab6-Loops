#include <iostream>
#include <string>
using namespace std;

int main(){
    string file = "Make this filename web friendly.txt";

    for(int i = 0 ; i<file.length(); ++i){
        if(file[i] == ' '){
            file[i] = '_';
        }
        
    }
        cout << file << endl;


    return 0;
}
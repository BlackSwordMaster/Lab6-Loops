//Ian Lin
#include <iostream>
using namespace std;

int main(){
    int min,max;

do{
    cout << "Enter a min and max: ";
    cin >> min >> max;

    if(max>min)
    break;
}while(true);
for( ;max>min ; --max){
    cout << max << " ";

}


    return 0;
}
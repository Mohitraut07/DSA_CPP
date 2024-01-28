#include <iostream>
using namespace std;

int main(){
    int a[5]={1,3,2};
    
    cout << sizeof(a) << endl;
    cout << a[4] << endl;

    for(int z:a){
        cout << z << endl;
    }

    return 0;
}
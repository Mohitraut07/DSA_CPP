#include<iostream>
using namespace std;

int main(){
    int a=10;
    int &r = a;
    // r = 20;
    int b = 20;
    // &r = b;//Error not reassignable
    cout << a << endl << r << endl;
    return 0;
}

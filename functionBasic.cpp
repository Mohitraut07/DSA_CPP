#include<iostream>
using namespace std;

int add(int a,int b){
    int c = a+b;
    return c;
}

int main(){
    int a =1,b=2;
    int sum;
    sum = add(a,b);
    cout << sum << endl;
    return 0;
}
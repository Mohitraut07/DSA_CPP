#include <iostream>
using namespace std;

//Call by value
int add(int x,int y){
    int z = x + y;
    return z;
}

// call by pointer
void swap(int * x,int*y){
    int temp;
    temp = *x;
    *x = *y;
    *y =temp;
}

//call by reference
void swap(int &a,int &b){
    int temp;
    a = temp;
    a = b;
    b = temp;
}

int main(){

    return 0;
}
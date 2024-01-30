#include <iostream>
#include <stdlib.h>
using namespace std;

struct Rectangle{
    int len,bre;
};

int main(){
    int a =10;
    int *p = &a;
     cout << *p << endl;
     cout << &a << endl;

     int A[5]={2,5,6,8,9};
    //  int *p;
     int *q = A;
     cout << q[4] << endl;

    int *u;
    // u= (int *)malloc(5*sizeof(int));
    u = new int[5];
    u[0]= 0;
    u[1]=10;
    u[2]=100;
    u[3]=1000;
    u[4]=10000;

    for(int i=0;i<5;i++){
        cout << u[i]<<endl;
    }

    free(u);

    int *r;
    char *t;
    Rectangle * ptr;
    cout << sizeof(r)<<endl;
    cout << sizeof(r)<<endl;
    cout << sizeof(ptr)<<endl;
    return 0;
}
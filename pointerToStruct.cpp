#include<iostream>
using namespace std;

struct Rectangle{
    int length,breadth;
}r;

int main(){
    struct Rectangle r1;
    Rectangle * p;
    p = &r1;
    //*p->length =10;//Error will access address only as "." has more precedance than "*"
    p->length = 10;
    cout << (*p).length << endl;

    // Dynamic memory allocation
    p = (struct Rectangle *)malloc(sizeof(Rectangle));
    p->length = 20;
    cout << (*p).length <<endl;

    // Access variable using "." and pointer using '->'
    Rectangle r2 = {1,2};
    cout << r2.length << endl << r2.breadth << endl;

    // c++ dynamic allocation
    Rectangle *q = new Rectangle;
    q->length =22;
    cout << q->length << endl;
    return 0;
}
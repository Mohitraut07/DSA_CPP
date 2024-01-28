#include <iostream>
using namespace std;

struct complex{
    int real,img;
}r1;

struct card{
    int face, shape,color;
};

int main(){
    // struct complex r1;
    struct card deck[52]={{1,0,0},{2,0,0},{3,0,0},{4,0,0}};
    r1.real = 10;
    r1.img = 10;

    cout << "The complex number is:"<< r1.real << "+"<< r1.img<<"i" << endl; 

    cout << sizeof(card)<<endl;

    cout << deck[1].face;
    cout << deck[1].shape;
    cout << deck[1].color;
    return 0;
}
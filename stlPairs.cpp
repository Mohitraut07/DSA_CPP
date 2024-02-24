#include<iostream>
using namespace std;

int main(){
    pair<int,int> p= make_pair(1,2);
    cout << p.first << " " << p.second << endl;
    pair <pair <int,int> , int> p1 = make_pair(make_pair(2,3),1);
    cout << p1.first.first << " " << p1.first.second << " "<< p1.second << endl;

    pair <int , int > arr[] = {make_pair(1,2)
    //old way of making pairs 
    //,{2,3},{3,4}
    //!Note : Use make_pair() function now
    };
    cout << arr[0].second;
    return 0;
}
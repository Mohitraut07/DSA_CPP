#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> ls;

    ls.push_back(2);
    // ls.emplace_back(4);

    ls.push_front(1);
    ls.push_front(0);
    // ls.emplace_front(-1);

    // cout << ls.at(1);

    for(int li:ls){
        cout << li << " ";
    }
    //!Note: emplace_front() , at() , .[] access methods do not work in new version
    //rest function are same as vector
    // begin , end , rend, rbegin , clear , insert , size, swap
    return 0;
}
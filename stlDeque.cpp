#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(1); //{1}
    // dq.emplace_back(2);
    dq.push_front(0); //{0,1}
    // dq.emplace_front(-1);
    cout << dq.at(0) << endl;

    dq.pop_front(); //{1}
    dq.pop_back();  //{}

    dq.back() ;
    dq.front() ;
    //! Note: emplace_front()  access methods do not work in new version
    // rest function are same as vector
    //  begin , end , rend, rbegin , clear , insert , size, swap

    return 0;
}
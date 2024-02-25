#include<iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(0);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    // s.emplace(5);

    cout << s.top() << ' ';//4

    cout << s.size() << " ";

    cout << s.empty() << " ";
    // cout << s.top();
    stack<int> copy;
    copy.swap(s);

    //! Note: emplace()  access method does not work in new version
    return 0;
}
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{1,2}
    // q.emplace(3);//{1,2,3}

    q.back() += 5; // 7

    cout << q.back() << endl; //{1,7}

    cout << q.front() << endl; //{1}

    q.pop(); //{7}

    cout << q.front() << endl; // prints 7

    //! Note: emplace() access method does not work in new version
    // rest function are same as stack
    // size, swap ,empty
    return 0;
}
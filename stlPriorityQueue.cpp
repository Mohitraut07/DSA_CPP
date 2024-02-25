#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue <int> pq;
    pq.push(0);
    pq.push(1);
    pq.push(2);

    // pq.emplace(3);

    cout << pq.top() << endl;//prints 2
    pq.pop();
    cout << pq.top() << endl;//prints 1


    //! Note: emplace()  access method does not work in new version
    // size , swap , empty same as stack and queue
    return 0;
}
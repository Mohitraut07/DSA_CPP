#include<iostream>
#include <queue>
using namespace std;
 
int main()
{
    // Min Heap
    priority_queue <int , vector<int>,greater <int> > pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(10);

    cout << pq.top();//prints 2
    return 0;
}
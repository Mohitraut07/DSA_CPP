#include <iostream>
#include <set>
using namespace std;

int main()
{
    // Everything is same as set
    // only stores duplicate elements also

    multiset<int> ms;
    ms.insert(0); //{0}
    ms.insert(1); //{0,1}
    ms.insert(1); //{0,1,1}
    ms.insert(1); //{0,1,1,1}

    int count = ms.count(1);
    cout << count << endl;
    ms.erase(1); // all 1's are erased

    int count1 = ms.count(1);
    cout << count1 << endl;

    ms.insert(1);
    // only a single one erased
    ms.erase(ms.find(1));

    // cout << ms.find(1) << endl;

    // ms.erase(ms.find(1), ms.find(1)+2);
    // rest all function same as set
    return 0;
}
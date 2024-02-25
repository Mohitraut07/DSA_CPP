#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> mpp;

    map<int, pair<int, int>> mpp1;

    map<pair<int, int>, int> mpp2;

    mpp[1] = 2;

    // mpp2[{2, 3}] = 10;

    // Output the content of mpp
    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    // Accessing elements of mpp
    cout << "Value of mpp[1]: " << mpp[1] << endl;

    // Attempting to access a key that does not exist in mpp
    // cout << "Value of mpp[5]: " << mpp[5] << endl; // This will cause an error since mpp[5] is not initialized

    // You can check if a key exists in the map before accessing it
    if (mpp.find(5) != mpp.end())
    {
        cout << "Value of mpp[5]: " << mpp[5] << endl;
    }
    else
    {
        cout << "Key 5 does not exist in mpp" << endl;
    }

    auto it = mpp.find(3);
    // cout << *(it) << endl;

    auto it1 = mpp.lower_bound(2);

    auto it2 = mpp.upper_bound(5);

    // erase , swap , size , empty, are same as above
    return 0;
}

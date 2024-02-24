#include <iostream>
using namespace std;

int main()
{

    vector<int> v;
    v.push_back(1);
    v.emplace_back(5);
    v.emplace_back(2);
    cout << v.at(2) << endl;
    cout << v[1] << endl;

    vector<pair<int, int> > vec;
    vec.push_back(make_pair(2, 3));
    // Note: Below line does not work in newer version
    // vec.push_back({12,13});
    vec.emplace_back(4, 1);
    cout << vec.at(0).first << endl;
    cout << vec[0].second << endl;
    cout << vec.at(1).first << " " << vec[1].second << endl;

    vector<int> v2(v);
    cout << v2.at(0) << endl;
    cout << v2.at(1) << endl;
    cout << v2.at(2) << endl;

    vector<int> v1(5, 100);
    cout << v1[0] << endl;
    cout << v1[1] << endl;
    cout << v1[2] << endl;
    cout << v1[3] << endl;
    cout << v1[4] << endl;

    // iterator using vectors

    vector<int>::iterator it = v.begin();
    // it = 0;
    cout << *(it) << endl;
    // it = 1;
    it++;
    cout << *(it) << endl;

    // Old notation
    // vector <int> ::iterator it1 = v.end();
    // vector <int> ::iterator it2 = v.rend();
    // vector <int> ::iterator it3 = v.rbegin();

    vector<int>::iterator it1 = v.end();            // Iterator to one past the last element
    vector<int>::reverse_iterator it2 = v.rbegin(); // Iterator to the reverse beginning
    vector<int>::reverse_iterator it3 = v.rend();   // Iterator to one past the reverse end

    cout << v.back() << endl;

    for (vector<int>::iterator it4 = v.begin(); it4 != v.end(); it4++)
    {
        cout << *(it4) << " ";
    }
    cout << endl;

    for (auto it5 = v.begin(); it5 != v.end(); it5++)
    {
        cout << *(it5) << " ";
    }
    cout << endl;

    for (auto it : v)
    {
        cout << it << " ";
    }
    // Original : {1,5,2}
    // v.erase(v.begin()+1);// {1,2}

    v.erase(v.begin(), v.begin() + 1); //{2}
    // cout << v[1];

    vector<int> v5(2, 100);           //{100,100}
    v5.insert(v5.begin(), 300);       //{300,100,100}
    v5.insert(v5.begin() + 1, 2, 10); //{300,10,10,100,100}
    cout << v5[0] << " ";
    cout << v5[1] << " ";

    vector<int> copy(2, 100);
    v5.insert(v5.begin(), copy.begin(), copy.end());

    cout << v5.size() << " "; // 7

    copy.pop_back(); //{100}

    // v5 = {100,100,300,10,10,100,100}
    // copy = {100}
    v5.swap(copy);
    cout << v5.size()<< " "; // 1

    copy.clear();//erases the entire vector
    cout << v5.empty();

    return 0;
}
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> st;
    st.insert(0); //{0}
    // st.emplace(1); //{0,1}
    st.insert(1); //{0,1}
    st.insert(1); //{0,1}
    st.insert(2); //{0,1,2}
    st.insert(3); //{0,1,2,3}

    /* Functionality of insert can also be used , this only increases the efficiency. */
    // begin() , end() , rbegin() , rend() , size()
    // empty() and swap() are same as others

    set<int>::iterator it = st.find(2);

    set<int>::iterator it1 = st.find(6);

    cout << *(it1) << endl;

    //{0,1,2}
    st.erase(3); // erases 3 //? Takes lograthmic time

    int count = st.count(1);
    cout << count << endl;

    set<int>::iterator it2 = st.find(0);
    //{0,1,2}
    st.erase(it2);                 // takes constant time
    cout << *(st.begin()) << endl; //{1,2}

    set<int>::iterator it3 = st.find(1);
    set<int>::iterator it4 = st.find(2);
    //{1,2}
    st.erase(it3, it4);    //{2}
    cout << *(st.begin())<< " "; //{2}

    st.insert(1);
    st.insert(3);
    st.insert(4);
    st.insert(5);

    set<int>::iterator it5 = st.lower_bound(2);

    cout << *(it5) << endl;
    set<int>::iterator it6 = st.upper_bound(3);
    //! Note: emplace() , auto access methods do not work in new version
    return 0;
}
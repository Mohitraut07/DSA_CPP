#include <iostream>
using namespace std;

int GCDFinder(int m,int n){
    // Using Euclidean algorithm
    while(m != 0){
        int temp = m;
        m = n%m;
        n = temp;
    }
    return n;
}

int main()
{
    int m,n;
    cout << "Enter the numbers to find GCD: "<< endl;
    cin >> m >> n;

    int res = GCDFinder(m,n);
    cout << " GCD is : " << res;
    return 0;
}
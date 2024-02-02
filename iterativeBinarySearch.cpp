#include<iostream>
using namespace std;

// Binary search
int binarySearch(int a[],int l,int h,int k){
    while(l<=h){
    int m = l + (h-l)/2;
    if(k<a[m])
        h= m-1;
    else
        l = m+1;
    if(k == a[m])
        return m;
    }
    return -1;
}

// Driver code
int main(){
    int arr[] = {4,6,9,11,15};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout << "Enter the element to be found:";
    cin >> key;
    int result = binarySearch(arr,0,size-1,key);
    result==-1 ? cout << "Element not found": cout << "Element found at " << result;
    return 0;
}
#include <iostream>
using namespace std;

int binary(int a[],int l,int h,int k){
    if(l<=h){
        int mid = l + (h-l)/2;
        if(a[mid]==k){
            return mid;
        }
        if(k< a[mid]){
           return binary(a,l,mid-1,k);}
        else{
            return binary(a,mid+1,h,k);}
    }
    return -1;
    
}


// Driver code
int main(){
    int arr[] = {2,5,7,9,19};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 0;
    int result = binary(arr,0,size-1,key);
    result==-1? cout << "Element not found " : cout << "Element found at: "<< result; 
    return 0;
}
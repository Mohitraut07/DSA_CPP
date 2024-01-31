#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int x){
    for(int i=0;i<size;i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={2,3,4,10,40};
    int x = 10;
    int N = sizeof(arr)/sizeof(arr[0]);

    int result = linearSearch(arr,N,x);
    (result == -1)
            ? cout <<"Element is not present" 
            : cout <<"Element is present at index " << result << endl;
    return 0;
}
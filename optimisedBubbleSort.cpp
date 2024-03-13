#include <iostream>
using namespace std;

void oBS(int arr[],int n){
    bool flag = false;
    for(int i=0;i<n;i++){
        flag= false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
                flag = true;
            }
        }
        if(flag == false)
            break;
    }
}

void printArray(int arr[],int n){
    for(int k=0;k<n;k++){
        cout << arr[k] << endl;
    }
}

int main()
{
    int arr[] = {1,23,1,2,2,12,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    oBS(arr,n);
    printArray(arr,n);
    return 0;
}
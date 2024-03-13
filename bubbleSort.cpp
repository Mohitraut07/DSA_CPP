#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i =0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }
}
 
int main()
{
    int arr[] = {98,22,21,1,11,24,12};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}
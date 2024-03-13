#include <iostream>
using namespace std;

void selectionSort(int a[], int s){
    int min_ind;
    int j,i;
    for(i=0;i<s-1;i++){
        min_ind = i;
        for(j=i+1;j<s;j++){
            if(a[j]<a[min_ind])
                min_ind = j;
        }
        if( min_ind != i){
            swap(a[i],a[min_ind]);
        }
    }
}

void printArray(int a[],int s){
    for(int i=0;i<s;i++){
        cout << a[i] << endl;
    }
}

int main(){
    int arr[]={2,4,11,7,1,9,232,323,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,size);
    cout << "After sorting array :" << endl;
    printArray(arr,size);
    return 0;
}
#include <iostream>
using namespace std;

void selectionSort(int a[],int s){
    int min_index;
    for(int i=0;i<s-1;i++){
        min_index = i;
        for(int j=i+1;j<s;j++){
            if(a[j]< a[min_index]){
                min_index = j;
            }
        }
        if(min_index != i){
            swap(a[min_index],a[i]);
        }
    }

}

void printArray(int a[],int s){
    for(int i=0;i<s;i++){
        cout << a[i] << endl;
    }
}

int main(){
    int arr[]={2,4,11,7,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,size);
    cout << "After sorting array :" << endl;
    printArray(arr,size);
    return 0;
}
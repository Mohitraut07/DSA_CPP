#include <iostream>
using namespace std;
// Optimized Bubble Sort

//Function to print value
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << endl;
    }
}

// Bubble Sort function
void bubble(int arr[],int n){
    bool swapped ;
    for(int i=0;i<n-1;i++){
        swapped = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}

//Driver program main
int main(){
    int a[]= {4,2,6,2,1};//Array
    //Size
    int n= sizeof(a) / sizeof(a[0]);
    
    bubble(a,n);//Sort function call
    print(a,n);//Values after sort

    return 0;
}
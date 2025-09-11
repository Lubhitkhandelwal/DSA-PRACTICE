#include<iostream>
using namespace std;

void bubbleSort(int *arr,int n){
    if(n==0 || n==1){
        return;
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,n-1);
}

int main(){
    int n=7;
    int arr[n]={6,2,7,1,9,12,5};

    bubbleSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
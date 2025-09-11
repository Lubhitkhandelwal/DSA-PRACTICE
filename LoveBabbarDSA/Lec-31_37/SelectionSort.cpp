#include<iostream>
using namespace std;

void selectionSort(int *arr,int n){
    if(n==0 || n==1){
        return;
    }

    int min=arr[0];
    int temp=0;
    for(int i=1;i<n;i++){
       if(arr[i]<min){
        min=arr[i];
        temp=i;
       } 
    }
    swap(arr[temp],arr[0]); 

    selectionSort(arr+1,n-1);
}

int main(){
    int n=7;
    int arr[n]={6,2,7,1,9,12,5};

    selectionSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
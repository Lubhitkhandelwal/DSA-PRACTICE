#include<iostream>
using namespace std;

void insertionSort(int *arr,int n){
    if(n==0 || n==1){
        return;
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            return insertionSort(arr+1,n-1);
        }else{
            
            for(int j=i;j>=0;j--){
                if(arr[j]<arr[i+1])
            }    
        }
    }
}

int main(){
    int n=7;
    int arr[n]={6,2,7,1,9,12,5};

    insertionSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
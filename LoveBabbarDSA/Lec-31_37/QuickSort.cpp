#include<iostream>
using namespace std;

int partition(int *arr,int s,int e){
    int pivot=arr[s];
    int cnt=0;

    for(int i=s+1;i<=e;i++){
        if(arr[i]<pivot){
            cnt++;
        }
    }
    int pivotIndex=s+cnt;
    swap(arr[s],arr[pivotIndex]);

    int i=s;
    int j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        
        if(arr[i]>pivot && arr[j]<pivot){    
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}


void quickSort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
    int i=partition(arr,s,e);

    quickSort(arr,s,i-1);

    quickSort(arr,i+1,e);

}


int main(){
    int n=10;
    int arr[n]={8,14,5,9,21,3,12,1,5,1};

    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
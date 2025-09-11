#include<iostream>
using namespace std;

int binarySearch(int *arr,int s,int e,int k){

    if(s>e){
        return -1;
    }
    int mid=s+((e-s)/2);

    if(arr[mid]==k){
        return mid;
    }

    if(k<=arr[mid]){
        return binarySearch(arr,0,mid,k);
    }else{
        return binarySearch(arr,mid+1,e,k);
    }
}

int main(){
    int n=9;
    int arr[n]={9,11,19,23,25,37,43,52,65};

    int k=65;
    int ans=binarySearch(arr,0,n-1,k);

    cout<<ans;

    // if(ans){
    //     cout<<"Key found in array";
    // }else{
    //     cout<<"Key not found in array";
    // }
}

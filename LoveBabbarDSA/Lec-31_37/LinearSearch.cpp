#include<iostream>
using namespace std;

bool linearSearch(int *arr,int n,int k){
    if(n==0){
        return false;
    }

    if(arr[0]==k){
        return true;
    }else{
        return linearSearch(arr+1,n-1,k);
    }
}

int main(){
    int n=5;
    int arr[n]={9,1,19,3,25};

    int k=19;
    int ans=linearSearch(arr,n,k);

    if(ans){
        cout<<"Key found in array";
    }else{
        cout<<"Key not found in array";
    }
}
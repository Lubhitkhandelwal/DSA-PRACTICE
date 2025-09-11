#include<iostream>
using namespace std;

int getSum(int *arr,int n){

    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }

    int ans=arr[0]+getSum(arr+1,n-1);
    return ans;
}


int main(){
    int n=5;
    int arr[n]={2,5,7,9,14};

    int ans=getSum(arr,n);
    cout<<ans;
}
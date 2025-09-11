#include<iostream>
using namespace std;

bool isSorted(int* arr,int n){
    if(n==0 || n==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }else{
        bool ans=isSorted(arr+1,n-1);
        return ans;
    }
    
}

int main(){
    int n=5;
    int arr[5]={2,4,9,15,87};
    
    bool ans=isSorted(arr,n);

    if(ans==0){
        cout<<"Array is not sorted";
    }else{
        cout<<"Array is sorted";
    }

}
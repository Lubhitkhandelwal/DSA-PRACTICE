#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
int BinSearch(int arr[],int n,int a){
  int s=0;
  int e=n;
  while(s<=e){
    int mid=(s+e)/2;
    
    if(arr[mid]==a){
      return mid;
    }else if(arr[mid]>a){
      e=mid-1;
    }else{
      s=mid+1;
    }
  }
  return -1;
}
int main(){
  int n;
  cout<<"Enter size of array: ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){   //input of array
    cout<<"Enter element "<<i+1<<":";
    cin>>arr[i];
  }
  int a;
  cout<<"Enter element to be searched: ";
  cin>>a;
  cout<<"Index: ";
  cout<<BinSearch(arr,n,a)<<endl;
}
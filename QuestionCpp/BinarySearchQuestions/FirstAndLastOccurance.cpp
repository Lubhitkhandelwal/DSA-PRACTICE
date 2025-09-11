#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int firstocc(int arr[],int n, int key){
  int a=0;
  for(int i=0;i<n;i++){
    if(arr[i]==key){
      a=i;
      break;
    }
  }
  return a;
}

int lastocc(int arr[],int n, int key){
  int b=0;
  for(int i=n;i>0;i--){
    if(arr[i]==key){
      b=i;
      break;
    }
  }
  return b;
}

int main() {
  int n;
  cout<<"Enter size of array: ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"Enter"<<i<<"th element: ";
    cin>>arr[i];
  }
  int key;
  cout<<"Enter element to find: ";
  cin>>key;

  cout<<"["<<firstocc(arr,n,key)<<",";
  cout<<lastocc(arr,n,key)<<"]";
  
  // int arr[6]={1,2,2,2,3,4};
  // int key=2;
  // int a=0,b=5;
  
  // for(int i=0;i<b;i++){
  //   if(arr[i]==key){
  //     cout<<"["<<i;
  //     break;
  //   }
  // }
  // for(int j=5;j>a;j--){
  //   if(arr[j]==key){
  //     cout<<","<<j<<"]";
  //     break;
  //   }
  // }
}
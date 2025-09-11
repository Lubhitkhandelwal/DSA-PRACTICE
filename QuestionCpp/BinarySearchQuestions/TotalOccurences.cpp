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
    cout<<"Enter element "<<i<<": ";
    cin>>arr[i];
  }
  int key;
  cout<<"Enter element to find: ";
  cin>>key;

  int a=firstocc(arr,n,key);
  int b=lastocc(arr,n,key);

  cout<<"Total number of occurences: "<<b-a+1;
  
  
 
}
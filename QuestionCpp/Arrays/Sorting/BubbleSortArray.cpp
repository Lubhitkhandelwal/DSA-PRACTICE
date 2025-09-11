#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
int sortArray(int arr[],int n){
  int c=1;
  while(c<n){
    for(int i=0;i<n-1;i++){
      if(arr[i]>arr[i+1]){
        int a=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=a;
      }
    }
    c++;
  }
  cout<<"Sorted Array: ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }cout<<endl;
  return c;
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
  cout<<"Unsorted array: ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }cout<<endl;
  cout<<sortArray(arr,n);
}
#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
int sortArray(int arr[],int n){
  for(int i=1;i<n;i++){
    int c=arr[i];
    int j=i-1;
    while(arr[j]>c && j>=0){
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=c;
  }
  cout<<"Sorted Array: ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }cout<<endl;
  return 0;
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
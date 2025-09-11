#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
int main(){
  int n;
  cout<<"Enter the size of array: ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"Enter "<<" "<<i+1<<" "<<"element: ";
    cin>>arr[i];
  }
  int a=arr[0];
  for(int i=0;i<n;i++){
    if(arr[i]>a){
      a=arr[i];
    }
    cout<<a<<" ";
  }
}
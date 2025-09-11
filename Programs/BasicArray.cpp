#include <iostream>
#include <math.h>
using namespace std;
int main(){
  int n;
  cout<<"Enter size of array: ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){   //input of array
    cout<<"Enter element "<<i+1<<":";
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){   //output of array
    cout<<arr[i]<<" ";
  }
  
}
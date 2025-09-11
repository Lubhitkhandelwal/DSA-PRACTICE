#include <iostream>
#include <math.h>
#include <climits>
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
  int a;
  cout<<"Enter element to be searched: ";
  cin>>a;
  int j=1;
  for(int i=0;i<n;i++){
    if(a==arr[i]){
      cout<<"Element found at index "<<i;
      break;
    }
    j++;
  }
  if(j==n+1){
    cout<<"Not Found -1";
  }
}
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
  int m=arr[1];
  int l=arr[1];
  for(int i=1;i<n;i++){
    int a=arr[i];
    int b=arr[i-1];
    m=max(a,max(b,m));
    l=min(a,min(b,l));
  }
  cout<<"Maximum is: "<<m<<endl;
  cout<<"Minimum is: "<<l<<endl;
}
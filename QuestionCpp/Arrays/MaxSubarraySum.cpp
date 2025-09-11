#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
int main(){
  int n;
  cout<<"Enter size of array: ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"Enter element "<<i+1<<": ";
    cin>>arr[i];
  }
  cout<<"All possible subarrays: "<<endl;
  int a=0;
  int b=0;
  int s=0;
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      int sum=0;
      for(int k=i;k<=j;k++){
        sum=sum+arr[k];
        cout<<arr[k]<<" ";
        if(sum>s){
          s=sum;
          a=i;
          b=j;
          }
      }
      
      
      cout<<endl;
    }
    
  }
  cout<<"Max Sum: "<<s<<endl;
  cout<<"Subarray with max sum: ";
  for(int i=a;i<=b;i++){
    cout<<arr[i]<<" ";
  }
}
#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
int main(){
  int n;
  cout<<"Enter number of days: ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"Enter number of visitors on day "<<i+1<<" :";
    cin>>arr[i];
  }
  int c=0;
  int m=0;
  for(int i=0;i<n;i++){
    if(arr[i]>m && arr[i]>arr[i+1]){
      // cout<<i<<endl;
      c++;
    }
    m=max(m,arr[i]);
    
  }cout<<"Number of record breaking days: "<<c;
}
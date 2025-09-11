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
  int N=1e6+2;
  bool check[N];
  for(int i=1;i<N;i++){
    check[i]=false;
  }
  for(int i=0;i<n;i++){
    if(arr[i]>=0){
      check[arr[i]]=true;
    }
  }
  int ans=-1;
  for(int i=0;i<N;i++){
    if(check[i]==false){
      ans=i;
      break;
    }
  }
  cout<<"First positive element which is missing from array is: "<<ans;
}
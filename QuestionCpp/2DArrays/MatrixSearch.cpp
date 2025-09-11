#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

int main(){
  int n,m;
  cout<<"Enter n: ";
  cin>>n;
  cout<<"Enter m: ";
  cin>>m;
  int arr[n][m];
  cout<<"Matrix: "<<endl;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout<<"Enter ("<<i<<","<<j<<") element: ";
      cin>>arr[i][j];
    }
  }
  int b;
  cout<<"Enter element to searched: ";
  cin>>b;
  bool a=false;
  int r=0,c=m-1;
  while(r<n && c>=0){
    if(arr[r][c]==b){
      a=true;
      break;
    }else if(arr[r][c]>b){
      c--;
    }else if(arr[r][c]<b){
      r++;
    }
  }
  if(a==false){
    cout<<"Element not found"<<endl;
  }else{
    cout<<"Element found at ("<<r<<","<<c<<")"<<endl;
  }
}
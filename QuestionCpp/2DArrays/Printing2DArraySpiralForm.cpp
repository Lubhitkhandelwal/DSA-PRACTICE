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
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout<<"Enter ("<<i<<","<<j<<") element: ";
      cin>>arr[i][j];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  int a=0,b=n-1,c=0,d=m-1;
  while(a<=b && c<=d){
    for(int i=c;i<=d;i++){
      cout<<arr[a][i]<<" ";
    }a++;
    for(int i=a;i<=b;i++){
      cout<<arr[i][d]<<" ";
    }d--;
    for(int i=d;i>=c;i--){
      cout<<arr[b][i]<<" ";
    }b--;
    for(int i=b;i>=a;i--){
      cout<<arr[i][c]<<" ";
    }c++;
  }
}
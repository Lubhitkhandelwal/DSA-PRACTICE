#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

int main(){
  int n;
  cout<<"Enter n: ";
  cin>>n;
  int arr[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<"Enter ("<<i<<","<<j<<") element: ";
      cin>>arr[i][j];
    }
  }
  cout<<endl;
  cout<<"Original matrix: "<<endl;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
  cout<<"Transpose matrix: "<<endl;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<arr[j][i]<<" ";
    }cout<<endl;
  }
}
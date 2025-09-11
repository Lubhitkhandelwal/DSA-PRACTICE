#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

int main(){
  int n1,n2,n3;
  cout<<"Enter n1: ";
  cin>>n1;
  cout<<"Enter n2: ";
  cin>>n2;
  cout<<"Enter n3: ";
  cin>>n3;
  int arr1[n1][n2];
  int arr2[n2][n3];
  cout<<"Matrix 1: "<<endl;
  for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
      cout<<"Enter ("<<i<<","<<j<<") element: ";
      cin>>arr1[i][j];
    }
  }
  cout<<"Matrix 2: "<<endl;
  for(int i=0;i<n2;i++){
    for(int j=0;j<n3;j++){
      cout<<"Enter ("<<i<<","<<j<<") element: ";
      cin>>arr2[i][j];
    }
  }
  int arr3[n1][n3];
  for(int i=0;i<n1;i++){
    for(int j=0;j<n3;j++){
      arr3[i][j]=0;
      for(int k=0;k<n2;k++){
        arr3[i][j]+=arr1[i][k]*arr2[k][j];
      }
    }
  }
  for(int i=0;i<n1;i++){
    for(int j=0;j<n3;j++){
      cout<<arr3[i][j]<<" ";
    }
    cout<<endl;
  }
}
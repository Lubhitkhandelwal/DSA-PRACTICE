#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr1,int n,vector<int>&arr2,int m,vector<int>&arr3){
  int i=0,j=0,a=0;
  while(i<n && j<m){
    if(arr1[i]<arr2[j]){
      arr3[a]=arr1[i];
      i++;
      a++;
    }else{
      arr3[a]=arr2[j];
      j++;
      a++;
    }
  }
  while(i<n){
    arr3[a]=arr1[i];
    a++;
    i++;
  }
  while(j<m){
    arr3[a]=arr2[j];
    j++;
    a++;
  }
}
void print(vector<int>&ans,int n){
  for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
  }
  cout<<endl;
}

int main() {
  int n;
  cout<<"Enter size of array1: ";
  cin>>n;
  vector<int> arr1(n);
  for(int i=0;i<n;i++){
    cout<<"Enter element "<<i+1<<": ";
    cin>>arr1[i];
  }
  int m;
  cout<<"Enter size of array2: ";
  cin>>m;
  vector<int> arr2(m);
  for(int i=0;i<m;i++){
    cout<<"Enter element "<<i+1<<": ";
    cin>>arr2[i];
  }
  vector<int>arr3(m+n);
  merge(arr1,n,arr2,m,arr3);
  print(arr3,m+n);
}
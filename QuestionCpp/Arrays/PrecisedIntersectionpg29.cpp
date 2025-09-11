#include <iostream>
#include<cmath>
#include<climits>
using namespace std;
int main() {
  int n;
  cout << "Enter size of array1: ";
  cin >> n;
  int arr1[n];
  for (int i = 0; i < n; i++) {
    cout << "Enter " << i << " element :";
    cin >> arr1[i];
  }
  int m;
  cout << "Enter size of array2: ";
  cin >> m;
  int arr2[m];
  for (int i = 0; i < m; i++) {
    cout << "Enter " << i << " element :";
    cin >> arr2[i];
  }
  bool a=0;
  int i=0,j=0;
  while(i<n && j<m){
    if(arr1[i]<arr2[j]){
      i++;
    }else if(arr1[i]==arr2[j]){
      a=1;
      cout<<arr1[i]<<" ";
      i++;j++;
    }else{
      j++;
    }
  }
  if(a==0){
    cout<<"-1";
  }
}
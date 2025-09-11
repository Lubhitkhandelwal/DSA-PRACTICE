#include <climits>
#include <cmath>
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
  // imput array length
  int n;
  cout << "Enter size of array: ";
  cin >> n;
  // input array
  int arr[n];
  for (int i = 0; i < n; i++) {
    cout << "Enter " << i << " element :";
    cin >> arr[i];
  }
  // for(int i=0;i<n;i++){
  //   for(int j=i+1;j<n;j++){
  //     if(arr[i]>arr[j]){
  //       int temp=arr[i];                //for simple sorting (have high time complexity)
  //       arr[i]=arr[j];
  //       arr[j]=temp;
  //     }
  //   }
  // } 
  
  int i=0;
  int j=n-1;
  while(i<=j){
    if(arr[i]==0){
      i++;
    }else if(arr[j]==1){
      j--;
    }else if(arr[i]==1 && arr[j]==0){
      swap(arr[i],arr[j]);
    }
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
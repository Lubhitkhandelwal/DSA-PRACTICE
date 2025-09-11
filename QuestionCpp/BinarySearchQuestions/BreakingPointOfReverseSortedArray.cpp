#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
// search in a sorted rotated array
int main() {
  int n;
  cout << "Enter size of array (should be greater than 3): ";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cout << "Enter element " << i << ": ";
    cin >> arr[i];
  }

  int s=0,e=n-1;
  int m=s+((e-s)/2);
  while(s<e){
    if(arr[0]<arr[m]){
      s=m+1;
    }else{
      e=m;
    }
    m=s+((e-s)/2);
  }
  cout<<"Breaking point of Reverse Sorted Array: "<<arr[e]<<endl;
}
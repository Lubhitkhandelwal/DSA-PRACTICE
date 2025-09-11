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
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(arr1[i]==arr2[j]){
        cout<<arr1[i]<<" ";
        a=1;
        arr2[j]=INT_MIN;    // here we are updating because we dont want it to match with any repeated element also.. mtlb ye number kisi or se map na ho jaye isliye hamne update kar diya...
        break;
      }
    }
  }
  if(a==0){
    cout<<"-1";
  }
}
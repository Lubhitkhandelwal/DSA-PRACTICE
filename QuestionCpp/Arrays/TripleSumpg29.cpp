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
  // int arr[n];
  vector<int> arr(n);      //defined in vector form
  for (int i = 0; i < n; i++) {
    cout << "Enter " << i << " element :";
    cin >> arr[i];
  }
  sort(arr.begin(),arr.end());
  // input sum required
  int m;
  cout << "Enter sum: ";
  cin >> m;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      for(int k=j+1;k<n;k++){
        if(arr[i]+arr[j]+arr[k]==m){
          cout<<"Pair :"<<arr[i]<<" "<<arr[j]<<" "<<" "<<arr[k]<<endl;
        }
      }
    }
  } 
}
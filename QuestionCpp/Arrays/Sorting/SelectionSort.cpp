#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cout << "Enter size of array: ";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cout << "Enter element " << i + 1 << " :";
    cin >> arr[i];
  }
  for(int i=0;i<n;i++){
    int min=i;
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[min]){
        min=j;
      }
    }
    swap(arr[min],arr[i]);
  }

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}
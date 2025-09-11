#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
// pivot element
int main() {
  int n;
  cout << "Enter size of array (should be greater than 3): ";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cout << "Enter element " << i << ": ";
    cin >> arr[i];
  }
  int s = 0, e = n - 1;
  int a = arr[s], b = arr[e];
  while (s < e) {
    if (a < b) {
      a += arr[s + 1];
      s++;
    } else {
      b += arr[e - 1];
      e--;
    }
  }
  cout << "Index of pivot element: " << e << endl;
  cout << "Pivot element: " << arr[s] << endl;
}
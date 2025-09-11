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
  int c = 0;
  int a = n - 1;
  while (c < n) {
    for (int i = 0; i < a; i++) {
      if (arr[i] > arr[i + 1]) {
        swap(arr[i], arr[i + 1]);
      }
    }
    c++;
    a--;
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}
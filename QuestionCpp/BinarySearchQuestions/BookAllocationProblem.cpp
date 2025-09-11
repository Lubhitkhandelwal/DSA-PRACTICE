#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid) {
  int a = 1, sum = 0;
  for (int i = 0; i < n; i++) {
    if (sum + arr[i] <= mid) {
      sum += arr[i];
    } else {
      a++;
      if (a > m || arr[i] > mid) {
        return false;
      }
      sum = arr[i];
    }
  }
  return true;
}
int main() {
  int n;
  cout << "Enter size of array: ";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cout << "Enter element " << i + 1 << " :";
    cin >> arr[i];
  }
  int m;
  cout << "Enter number of students: ";
  cin >> m;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  int ans = -1;
  int s = 0, e = sum;
  int mid = s + (e - s) / 2;
  while (s <= e) {
    if (isPossible(arr, n, m, mid)) {
      ans = mid;
      e = mid - 1;
    } else {
      s = mid + 1;
    }
    mid = s + (e - s) / 2;
  }
  cout << ans;
}
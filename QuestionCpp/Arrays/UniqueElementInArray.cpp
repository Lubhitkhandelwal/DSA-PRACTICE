/*
#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter size: ";
  cin >> n;
  int arr[n];
  int m = 0;
  for (int i = 0; i < n; i++) {
    cout << "Enter " << i << " element :";
    cin >> arr[i];
    m = max(m, arr[i]);
  }
  cout << m << endl;
  m++;
  int ar[m];
  for (int i = 0; i < m; i++) {
    ar[i] = 0;
  }
  for (int i = 0; i < n; i++) {
    ar[arr[i]]++;
  }
  for (int i = 0; i < m; i++) {
    cout << ar[i] << " ";
  }
  cout << endl;
  bool a = 0;
  int b = 0;
  for (int i = 0; i < m; i++) {
    if (ar[i] == 1) {
      a = 1;
      // cout << "Yes" << endl;
      b = i;
    } else {
      continue;
    }
  }
  if (a == 1) {
    cout << "Uniquie element is: " << b;
  } else {
    cout << "No unique element";
  }
}
*/
#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter size: ";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cout << "Enter " << i << " element :";
    cin >> arr[i];
  }
  int a=0;
  for(int i=0;i<n;i++){
    a=a^arr[i];
  }
  cout<<a;
}
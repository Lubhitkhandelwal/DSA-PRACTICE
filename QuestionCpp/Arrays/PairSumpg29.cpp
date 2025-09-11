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
      if(arr[i]+arr[j]==m){
        cout<<"Pair: "<<arr[i]<<" "<<arr[j]<<endl;
      }
    }
  }
}

/*
#include <climits>
#include <cmath>
#include <iostream>
using namespace std;
int main() {
  //imput array length
  int n;
  cout << "Enter size of array: ";
  cin >> n;
  //input array
  int arr[n];
  for (int i = 0; i < n; i++) {
    cout << "Enter " << i << " element :";
    cin >> arr[i];
  }
  //input sum required
  int m;
  cout << "Enter sum: ";
  cin >> m;
  int i = 0;
  int j = 1;
  while (i < n) {
    if (arr[i] + arr[j] < m) {
      j++;
    } else if (arr[i] + arr[j] == m) {
      cout << "Pair: " << arr[i] << " " << arr[j] << endl;
      i++;
      j = i + 1;
    } else {
      i++;
      j = i + 1;
    }
  }
}
*/
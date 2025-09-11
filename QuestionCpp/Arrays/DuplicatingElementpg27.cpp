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
  int b=0;
  for(int i=0;i<n;i++){
    a=a^arr[i];
    b=b^i;
  }
  int c=a^b;
  cout<<"Duplicate element is "<<c;
}
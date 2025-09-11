#include<iostream>
using namespace std;
void swap(int a,int b){
  int temp;
  temp=a;
  a=b;
  b=temp;
}
int main(){
  int n;
  cout<<"Enter size: ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"Enter "<<i<<" element: ";
    cin>>arr[i];
  }
  for(int i=0;i<n;i=i+2){
    if(i+1<n){
      int a=arr[i];
      arr[i]=arr[i+1];
      arr[i+1]=a;
    }
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
/*
void swap(int &a, int &b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}
int main() {
  int n;
  cout << "Enter size: ";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cout << "Enter " << i << " element: ";
    cin >> arr[i];
  }
  for (int i = 0; i < n; i = i + 2) {
    if (i + 1 < n) {
      // int a=arr[i];
      // arr[i]=arr[i+1];
      // arr[i+1]=a;
      swap(arr[i], arr[i+1]);
    }
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}
*/
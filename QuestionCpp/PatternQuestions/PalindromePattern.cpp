#include <iostream>
using namespace std;
int main() {
  int n;
  cout<<"Enter N: ";
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<2*n;j++){
      if(j>=n-i+1 && j<=n+i-1){
        int c = n>j?n-j+1:j-n+1;
        cout<<c;
      }
      else{
        cout<<" ";
      }
    }
    cout<<endl;
  }
}
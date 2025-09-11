#include <iostream>
using namespace std;
int main() {
  int n;
  cout<<"Enter N: ";
  cin>>n;
  for(int i=1;i<=2*n;i++){
    for(int j=1;j<2*n;j++){
      int c = n>=i?n-i:i-n-1;
      int d=i>n?3*n-i:n+i-1;
      if(j>=c+1 && j<=d){
        cout<<"*";
      }
      else{
        cout<<" ";
      }
    }
    cout<<endl;
  }
}
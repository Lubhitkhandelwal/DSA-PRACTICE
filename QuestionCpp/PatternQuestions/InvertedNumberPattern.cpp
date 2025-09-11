#include <iostream>
using namespace std;
int main() {
  int n;
  cout<<"Enter N: ";
  cin>>n;
  int a;
  for(int i=1;i<=n;i++){
    a=1;
    for(int j=1;j<=n-i+1;j++){
      cout<<a<<" ";
      a++;
    }
    cout<<endl;
  }
}
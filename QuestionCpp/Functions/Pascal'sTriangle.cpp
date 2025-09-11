#include <iostream>
#include <math.h>
using namespace std;
int fac(int n){
  int a=1;
  for(int i=1;i<=n;i++){
    a=a*i;
  }
  return a;
}
int coeff(int n,int r){
  int a=fac(n)/(fac(r)*fac(n-r));
  return a;
}
int main(){
  int n;
  // int r;
  cout<<"Enter n: ";
  cin>>n;
  // cout<<"Enter r: ";
  // cin>>r;
  for(int i=0;i<=n;i++){
    for(int j=0;j<=i;j++){
      cout<<coeff(i,j)<<" ";
    }
    cout<<endl;
  }
}
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
int main(){
  int n;
  int r;
  cout<<"Enter n: ";
  cin>>n;
  cout<<"Enter r: ";
  cin>>r;
  // int a=fac(n);
  // int b=fac(r);
  // int d=fac(n-r);
  // int c=b*d;
  // int e=a/c;
  if(n>r){
    cout<<"Number Of Combinations= "<<fac(n)/(fac(r)*fac(n-r));
  }else{
    cout<<"Invalid!! Check Again";
  }
}
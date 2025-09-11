#include <iostream>
#include <math.h>
using namespace std;
void fac(int n){
  int a=1;
  for(int i=1;i<=n;i++){
    a=a*i;
  }
  cout<<a;
  return;
}
int main(){
  int n;
  cout<<"Enter n: ";
  cin>>n;
  fac(n);
}
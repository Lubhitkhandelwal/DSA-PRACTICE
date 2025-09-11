#include <iostream>
#include <math.h>
using namespace std;
void fib(int n){
  int t1=0;
  int t2=1;
  int tn;
  for(int i=1;i<=n;i++){
    cout<<t1<<endl;
    tn=t1+t2;
    t1=t2;
    t2=tn;
  }
  return;
}
int main(){
  int n;
  cout<<"Enter number of terms till which seq should be printed: ";
  cin>>n;
  fib(n);
}
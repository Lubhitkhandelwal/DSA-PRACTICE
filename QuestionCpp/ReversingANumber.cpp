#include <iostream>
using namespace std;
int main() {
  int n;
  cout<<"Enter N: ";
  cin>>n;
  int a=0;
  int b;
  while(n>0){
    b=n%10;
    a=a*10+b;
    n=n/10; 
  }
  cout<<a;
}
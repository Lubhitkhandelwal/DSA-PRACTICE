#include <iostream>
#include <math.h>
using namespace std;
int DecToOct(int n){
  int a=0;
  int b;
  int c=0;
  while(n>0){
    b=n%8;
    a=a+b*pow(10,c);
    n=n/8;
    c++;
  }
  return a;
}
int BinToDec(int n){
  int a=0;
  int b;
  int c=0;
  while(n>0){
    b=n%10;
    a=a+b*pow(2,c);
    c++;
    n=n/10;
  }
  return a;
}
int main(){
  int n1;
  // int n2;
  cout<<"Enter n1:";
  cin>>n1;
  // cout<<"Enter the binary n2:";
  // cin>>n2;
  // int a=BinToDec(n1)+BinToDec(n2);
  cout<<DecToOct(n1);
}
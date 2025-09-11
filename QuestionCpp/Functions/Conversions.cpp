#include <iostream>
#include <math.h>
using namespace std;
int DecToBin(int n){
  int a=0;
  int b;
  while(n>0){
    b=n%2;
    a=a*10+b;
    n=n/2;
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
int OctToDec(int n){
  int a=0;
  int b;
  int c=0;
  while(n>0){
    b=n%10;
    a=a+b*pow(8,c);
    c++;
    n=n/10;
  }
  return a;
}
int HexToDec(string n){
  return 0;
}
int main(){
  int n;
  cout<<"Enter n:";
  cin>>n;
  cout<<BinToDec(n)<<endl;
}
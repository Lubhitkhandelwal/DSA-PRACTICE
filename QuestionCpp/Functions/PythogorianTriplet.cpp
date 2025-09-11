#include <iostream>
#include <math.h>
using namespace std;

bool pyth(int a,int b,int c){
  int h=max(a,max(b,c));
  int l=1;
  int k=1;
  if(h==a){
    l=b;
    k=c;
  }else if(h==b){
    l=a;
    k=c;
  }else if(h==c){
    l=a;
    k=b;
  }
  if(pow(h,2)==pow(l,2)+pow(k,2)){
    return true;
  }
  return false;
}
int main (){
  int a,b,c;
  cout<<"Enter a: ";
  cin>>a;
  cout<<"Enter b: ";
  cin>>b;
  cout<<"Enter c: ";
  cin>>c;
  if(pyth(a,b,c)){
    cout<<"Pythagorean triplet";
  }else{
    cout<<"Non-Pythagorean triplet";
  }
  return 0;
}
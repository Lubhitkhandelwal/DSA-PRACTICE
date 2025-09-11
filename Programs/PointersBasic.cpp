#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

int main(){
  int a=20;
  int*aptr=&a;
  cout<<&a<<endl;
  cout<<aptr<<endl;
  cout<<*aptr<<endl;
  *aptr=10;   //we have changed value of variable without using it
  cout<<a<<endl;
  aptr++;
  cout<<aptr;
}
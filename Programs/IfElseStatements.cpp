#include <iostream>
using namespace std;
int main() {
  int a;
  cout<<"Enter a:";
  cin>>a;
  int b;
  cout<<"Enter b:";
  cin>>b;
  int c;
  cout<<"Enter c:";
  cin>>c;
  if(a>b){
    if(a>c){
      cout<<"a is the greatest";
    }
    else{
      cout<<"c is the greatest";
    }
  }else if(b>a){
    if(b>c){
      cout<<"b is the greatest";
    }else{
      cout<<"c is the greatest";
    }
  }
  // if(a>b){
  //   cout<<"a is greater than b";
  // }else{
  //   cout<<"b is greater than a";
  // }
} 
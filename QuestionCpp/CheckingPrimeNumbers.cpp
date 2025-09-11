#include <iostream>
using namespace std;
int main() {
 int a;
  cout<<"Enter a:";
  cin>>a;
  int b=0;
  for(int i=2;i<=a-1;i++){
    if(a%i!=0){
      continue;
    }
    b=b+1;
  }
  if(b>=1){
  cout<<"Not prime";
  }else{
    cout<<"Prime";
  }
}  
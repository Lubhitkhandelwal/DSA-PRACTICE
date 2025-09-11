#include <iostream>
using namespace std;
int main() {
 int a;
  cout<<"Enter a:";
  cin>>a;
  int b;
  cout<<"Enter b:";
  cin>>b;
  int i;
  int j;
  for(i=a;i<=b;i++){
    for(j=2;j<i;j++){
      if(i%j==0){
        break;
      }
    }
    if(i==j){
      cout<<i<<endl;
    }else{
      continue;
    }
  }
}  
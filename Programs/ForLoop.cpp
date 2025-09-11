#include <iostream>
using namespace std;
int main() {
 int a;
  cout<<"Enter a:";
  cin>>a;
  // for(int i=1;i<=a;i++){
  //   cout<<i<<".Hello World\n";
  // }
  int c=0;
  for(int i =1;i<=a;i++){
    c=c+i;
  }
  cout<<c;
} 
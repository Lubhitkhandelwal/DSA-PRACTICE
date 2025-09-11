#include <iostream>
using namespace std;
int main() {
 int a;
  cout<<"Enter a:";
  cin>>a;
  int b;
  cout<<"Enter b:";
  cin>>b;
  for(int i=1;i<=a;i++){
    if(i%2==0){
      continue;
    }
    cout<<i<<" Yaa"<<endl;
    b=b-1;
    if(b==0){
      break;
    }
  }
}
#include <iostream>
using namespace std;
int main() {
  int n;
  cout<<"Enter N: ";
  cin>>n;
  for(int i=1;i<=n;i++){
    int a=1;
    for(int j=1;j<2*n;j++){
      if(j>=n-i+1 && j<=n+i-1){
        if(i%2==0 && j%2==0){
          cout<<a;
          a++;
        }
        else if(i%2!=0 && j%2!=0){
          cout<<a;
          a++;
        }
        else{
          cout<<" ";
        }
      }
      else{
        cout<<" ";
      }
    }
    cout<<endl;
  }
}
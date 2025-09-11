#include <iostream>
using namespace std;
int main() {
  int n;
  cout<<"ENTER N: ";
  cin>>n;
  int a=n%2==0?n/2:(n/2)+1;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(i<=a){ //Above half part
        if(j>i && j<n-i+1){      
          cout<<" ";
        }
        else{
          cout<<"*";
        }
      }
      else if(i>=a){ //Lower half part
        if(j>n-i+1 && j<=i-1){
          cout<<" ";
        }
        else{
          cout<<"*";
        }
      }
    }
    cout<<endl;
  }
}
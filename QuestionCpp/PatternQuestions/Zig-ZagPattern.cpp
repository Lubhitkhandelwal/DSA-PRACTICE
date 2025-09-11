#include <iostream>
using namespace std;
int main() {
  int n;
  cout<<"Enter N: ";
  cin>>n;
  int r =3; //Fixed number of rows
  for(int i=1;i<=r;i++){
    for(int j=1;j<=n;j++){
      if((i+j)%4==0){
        cout<<"*";
      }
      else if(i==2 && j%4==0){
        cout<<"*";
      }
      else{
        cout<<" ";
      }
    }
    cout<<endl;
  }
}
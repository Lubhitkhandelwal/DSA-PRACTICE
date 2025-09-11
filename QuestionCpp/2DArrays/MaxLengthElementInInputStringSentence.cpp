#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

int main(){
  int n;
  cout<<"Enter n: ";
  cin>>n;
  cin.ignore();
  char arr[n+1];
  cout<<"Enter string: ";
  cin.getline(arr,n);
  // cin.ignore();
  // cout<<arr;
  int cl=0,ml=0;
  int i=0;
  int a,b;
  while(i<=n){
    i++;
    if(arr[i] == ' ' || arr[i] == '\0'){
      if(cl>ml){
        ml=cl;
        a=i-ml;
        b=i-1;
      }
      cl=0;
    }
    else{
      cl++;
      if(arr[i]=='\0'){
        break;
      }
    }
  }
  cout<<ml<<endl;
  for(int i=a;i<=b;i++){
    cout<<arr[i];
  }
}
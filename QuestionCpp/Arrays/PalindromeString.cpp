#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

int main(){
  int n;
  cout<<"Enter n: ";
  cin>>n;
  char arr[n+1];
  cout<<"Enter string: ";
  cin>>arr;
  bool check = true;
  for(int i=0;i<n;i++){
    if(arr[i] != arr[n-1-i]){
      check=false;
      break;
    }
  }
  if(check==true){
    cout<<"Its a palindrome";
  }else{
    cout<<"Its not a palindrome";
  }
}
#include <iostream>
#include<string>
#include<algorithm>
#include <math.h>
#include <climits>
using namespace std;
int main(){
  string str;
  cout<<"Enter String: ";
  cin>>str;
  int arr[26];
  for(int i=0;i<26;i++){
    arr[i]=0;
  }
  for(int i=0;i<str.length();i++){
    arr[str[i]-'a']++;
  }
  int a=0;
  for(int i=0;i<25;i++){
    int b=max(arr[i],arr[i+1]);
    if(a<b){
      a=b;
    }
  }
  cout<<a;
}
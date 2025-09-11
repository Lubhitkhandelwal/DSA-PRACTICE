#include <iostream>
#include<string>
#include<algorithm>
#include <math.h>
#include <climits>
using namespace std;
int main(){
  int n;
  cout<<"Enter numbers: ";
  cin>>n;
  string s =to_string(n);
  // sort(s.begin(),s.end());
  // int a=s.length();
  // cout<<"Greatest number: ";
  // for(int i=a;i>=0;i--){
  //   cout<<s[i];
  // }
  sort(s.begin(),s.end(),greater<int>());
  cout<<"Greatest number: "<<s;
}
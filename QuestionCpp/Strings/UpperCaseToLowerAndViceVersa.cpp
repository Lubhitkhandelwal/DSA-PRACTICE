#include <iostream>
#include<string>
#include<algorithm>
#include <math.h>
#include <climits>
using namespace std;
int main(){
  string str;
  cin>>str;
  for(int i=0;i<str.length();i++){
    if(str[i]>='a' && str[i]<='z'){
      str[i]-=32;
    }else if(str[i]>='A' && str[i]<='Z'){
      str[i]+=32;
    }
    cout<<str[i];
  }
}
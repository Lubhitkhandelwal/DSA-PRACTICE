#include <iostream>
#include<string>
#include<algorithm>
#include <math.h>
#include <climits>
using namespace std;
int main(){
  string s1;
  // cout<<"Enter String1: ";
  // cin>>s1;
  string s2;
  // cout<<"Enter String2: ";
  // cin>>s2;
  // s1.append(s2);
  // cout<<"Concatenated String: "<<s1<<endl;
  cout<<s1+s2<<endl;
  cout<<s1[3]<<endl;

  s1.clear();
  s2.clear();

  s1="LUBHIT";
  s2="KHANDELWAL";
  cout<<s2.compare(s1)<<endl;
  cout<<s1.compare(s2)<<endl;
  
  s1.clear();
  cout<<s1.empty()<<endl;
  
  s1="abcdefghijklmnopqrstuvwxyz";
  s1.erase(3,4);
  cout<<s1<<endl;
  s1.clear();

  s1="abcdeklmn";
  cout<<s1.find("klmn")<<endl;
  cout<<s1.insert(3,"LOL")<<endl;
  // s1.clear();

  cout<<s1.length()<<endl;
  cout<<s1.size()<<endl;

  string s=s1.substr(2,5);
  cout<<s<<endl;

  string s3="258";
  int x=stoi(s3);
  cout<<x+5<<endl;
  string s4=to_string(x) + "5";
  cout<<s4<<endl;
  sort(s1.begin(),s1.end());
  cout<<s1<<endl;
}
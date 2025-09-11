#include<iostream>
using namespace std;

bool checkPalindrome(string s,int i,int j){
    if(i>=j){
        return true;
    }

    if(s[i]==s[j]){
        checkPalindrome(s,i+1,j-1);
    }else{
        return false;
    }
}

int main(){
    string s="sabbbas";

    bool ans=checkPalindrome(s,0,s.length()-1);

    if(ans){
        cout<<"String is Palindrome";
    }else{
        cout<<"String is not Palindrome";
    }
}
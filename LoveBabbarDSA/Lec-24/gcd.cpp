#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    if(a>b){
        gcd(a-b,b);
    }else{
        gcd(a,b-a);
    }
}

int main(){

    int a;
    int b;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;

    int ans=gcd(a,b);
    cout<<ans;

}
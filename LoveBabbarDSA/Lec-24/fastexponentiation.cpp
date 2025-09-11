#include<iostream>
using namespace std;

int Exp(int a,int b){
    
    if(b==1){
        return a;
    }
    
    if(b%2==0){
        return Exp(a,b/2)*Exp(a,b/2);
    }else{
        return Exp(a,b/2)*Exp(a,b/2)*a;
    }
}

int main(){
    int a;
    int b;
    cout<<"Enter number:";
    cin>>a;
    cout<<"Enter Power:";
    cin>>b;

    cout<<Exp(a,b);
}
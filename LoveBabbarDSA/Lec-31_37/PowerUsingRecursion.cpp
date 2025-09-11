#include<iostream>
using namespace std;

int power(int n,int p){
    if(p==0){
        return 1;
    }
    if(p%2==0){
        return power(n,p/2)*power(n,p/2);
    }else{
        return n*power(n,p/2)*power(n,p/2);
    }
}

int main(){
    int n=2;
    int p=9;

    int ans=power(n,p);
    cout<<ans;

}
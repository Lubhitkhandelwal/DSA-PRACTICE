// Sieve of Erathosthenes

#include<iostream>
#include<vector>
using namespace std;

int isPrime(int n){
    int cnt=0;
    vector<bool>Prime(n+1,true);

    Prime[0]=Prime[1]=false;
    for(int i=2;i<n;i++){
        if(Prime[i]){
            cnt++;
            for(int j=i*2;j<n;j=j+i){
                Prime[j]=false;
            }
        }
    }
    return cnt;
}

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<isPrime(n);
}
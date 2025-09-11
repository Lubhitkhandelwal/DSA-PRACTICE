#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }

    return n*factorial(n-1);
}

int pow2(int n){
    if(n==0){
        return 1;
    }

    return 2*pow2(n-1);
}

int print(int n){
    if(n==1){
        return 1;
    }
    cout<<n<<" ";
    
    print(n-1);
}

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;

    cout<<print(n)<<endl;

    cout<<"2^n is: "<<pow2(n)<<endl;

    cout<<"Factorial is: "<<factorial(n)<<endl;
}
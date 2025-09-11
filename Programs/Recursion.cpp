#include<iostream>
#include<string>
using namespace std;

// int power(int n){
//     if(n==0){
//         return 1;
//     }
//     return 2*power(n-1);
// }

// int factorial(int n){
//     if(n==0){
//         return 1;
//     }
//     return n*factorial(n-1);
// }

// void digit(int n){
//     if(n==0){
//         return;
//     }
//     digit(n-1);
//     cout<<n<<endl;
// }

// int Fseries(int n){
//     if(n==1){
//         return 0;
//     }else if(n==2){
//         return 1;
//     }
//     return Fseries(n-1)+Fseries(n-2);
// }

void sayDigit(int n,string arr[]){
    
    if(n==0){
        return;
    }
    
    int digit=n%10;
    n=n/10;
    sayDigit(n,arr);
    cout<<arr[digit]<<" ";
    
}

int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    int n;
    cout<<"Enter n:";
    cin>>n;
    
    sayDigit(n,arr);
    // cout<<Fseries(n);
    // digit(n);
    // cout<<power(n);
    // cout<<factorial(n);
}
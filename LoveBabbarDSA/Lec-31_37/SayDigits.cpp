#include<iostream>
using namespace std;

void SayDigit(int n,string arr[]){
    if(n==0){
        return;
    }
    int i=n%10;
    n=n/10;
    
    SayDigit(n,arr);

    cout<<arr[i]<<" ";
}

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;

    string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

    SayDigit(n,arr);
}
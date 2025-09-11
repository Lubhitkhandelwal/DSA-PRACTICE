#include<iostream>
#include<stack>
using namespace std;

// void delM(stack <int> &s,int count ,int n){
//     if(count==n/2){
//         s.pop();
//         return;
//     }
//     int a=s.top();
//     s.pop();
//     delM(s,count+1,n);
//     s.push(a);
// }


int main(){
    
    stack <int> s;
    int n,a;
    cout<<"Enter n: ";
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        // cout<<"Enter "<<i+1<<" element: ";
        cin>>a;
        s.push(a);
    }
    // delM(s,count,n);
    rev(s,n,count);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
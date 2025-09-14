#include<iostream>
#include<vector>
#include<list>
#include<stack>
using namespace std;

class Stack{
    vector<int> v;

    public:

    void push(int val){
        v.push_back(val);
    }

    void pop(){
        v.pop_back();
    }

    int top(){
        return v[v.size()-1];
    }

    bool empty(){
        return v.size()==0;
    }
};


int main(){
    Stack S;

    stack<int> s; //using stl

    S.push(10);
    S.push(20);
    S.push(30);

    while(!S.empty()){
        cout<<S.top()<<" ";
        S.pop();
    }
    cout<<endl;
}
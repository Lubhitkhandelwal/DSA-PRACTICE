#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    vector<int> prices = {100,80,60,70,60,75,85};

    vector<int> ans(prices.size());
    stack<int> st;

    for(int i=0;i<prices.size();i++){
        while(st.size()>0 && prices[i]>=prices[st.top()]){
            st.pop();
        }
        if(st.empty()){
            ans[i] = i+1;
        }else{
            ans[i] = i-st.top();
        }
        st.push(i);
    }

    for(int val:ans){
        cout<<val<<" ";
    }
}
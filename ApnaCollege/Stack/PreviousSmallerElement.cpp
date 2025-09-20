#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> prevSmallerElement(vector<int> arr){
    stack<int> st;
    vector<int> ans(arr.size());
    for(int i=0;i<arr.size();i++){
        if(st.empty()){
            ans[i]=-1;
        }else if(arr[i]>st.top()){
            ans[i]=st.top();
        }else{
            while(!st.empty() && arr[i]<st.top()){
                st.pop();
            }
            if(st.empty()){
                ans[i]=-1;
            }else{
                ans[i]=st.top();
            }
        }
        st.push(arr[i]);
    }
    return ans;
}


int main(){

    vector<int> arr = {3,1,0,8,6};

    vector<int> ans = prevSmallerElement(arr);
    
    for(int val : ans){
        cout<<val<<" ";
    }
    cout<<endl;

}
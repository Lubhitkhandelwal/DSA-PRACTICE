#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int getCelebrity(vector<vector<int>> arr){
    int n=arr.size();
    stack<int> st;
    for(int i=0;i<n;i++){
        st.push(i);
    }
    while(st.size()>1){
        int i=st.top();st.pop();
        int j=st.top();st.pop();
        if(arr[i][j]==0){
            st.push(i);
        }else{
            st.push(j);
        }
    }
    int ans = st.top();
    for(int i=0;i<<n;i++){
        if((arr[ans][i]==1 || arr[i][ans]==0) && i!=ans){
            return -1;
        }
    }
    return ans;

}


int main(){
    vector<vector<int>> arr={{0,1,0},{0,0,0},{0,1,0}};
    int ans = getCelebrity(arr);

    cout<<"Celebrity is : "<<ans<<endl;
}
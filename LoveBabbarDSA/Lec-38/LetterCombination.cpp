#include<iostream>
#include<vector>
#include<string>
using namespace std;

void solve(string digit,vector<string>& ans,string output,int index,string mapping[]){
    
    if(index>=digit.length()){
        ans.push_back(output);
        return;
    }

    int element=digit[index]-'0';
    string value=mapping[element];

    for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        solve(digit,ans,output,index+1,mapping);
        output.pop_back();
    }

}


int main(){
    string digit="23";
    vector<string> ans;
    string output;
    int index=0;

    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    solve(digit,ans,output,index,mapping);

    cout<<"{";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<",";
    }cout<<"}";
}
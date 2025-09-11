#include<iostream>
#include<vector>
using namespace std;

void subset(vector<int> arr,vector<int> output,vector<vector<int>>& ans,int index){
    if(index>=arr.size()){
        ans.push_back(output);
        return;
    }

    //exclude
    subset(arr,output,ans,index+1);


    //include
    int element=arr[index];
    output.push_back(element);
    subset(arr,output,ans,index+1);

}

int main(){
    
    vector<int> arr={1,2,3,4};
    vector<int> output;     

    vector<vector<int>> ans;  //2-D vector array

    subset(arr,output,ans,0);

    for(int i = 0; i < ans.size(); i++) {
        cout << "{ ";
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << "}, ";
    }
}
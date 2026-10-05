class Solution {
public:
    bool checkCol(vector<string>& strs, int i){
        for(int j=1;j<strs.size();j++){
            if(strs[j-1][i] > strs[j][i]){
                return false;
            }
        }
        return true;
    }

    int minDeletionSize(vector<string>& strs) {
        int ans = 0;
        for(int i=0;i<strs[0].size();i++){
            if(!checkCol(strs,i)){
                ans++;
            }
        }
        return ans;
    }
};
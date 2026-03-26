class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int ans = 0;
        for(auto it:m){
            if(m.find(it.first+1)!=m.end()){
                ans = max(ans,m[it.first]+m[it.first+1]);
            }
        }
        return ans;
    }
};
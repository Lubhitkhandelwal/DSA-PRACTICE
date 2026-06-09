class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        
        unordered_set<int> s;
        for(int x:nums){
            s.insert(x);
        }    

        int ans = 1;
        for(int x:s){
            int temp = 1;
            if(!s.count(x-1)){
                int ch = x;
                while(s.count(++ch)){
                    temp++;
                }
            }
            ans = max(ans,temp);
        }
        return ans;
    }
};
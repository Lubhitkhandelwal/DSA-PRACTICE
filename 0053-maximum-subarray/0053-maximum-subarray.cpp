class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int target=0;
        for(auto n:nums){
            if(target<0){
                target = 0;
            }
            target+=n;
            ans = max(ans,target);
        }    
        return ans;
    }
};
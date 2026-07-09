class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minLen = INT_MAX;
        int ans = 0;
        int n = nums.size();
        int s = 0;

        for(int e=0;e<n;e++){
            ans += nums[e];

            while(ans >= target){
                minLen = min(minLen,e-s+1);
                ans -= nums[s];
                s++;
            }
        }
        if(minLen==INT_MAX){
            minLen = 0;
        }
        return minLen;
    }
};
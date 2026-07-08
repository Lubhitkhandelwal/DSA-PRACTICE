class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long long ans = 0;
        long long maxSum = 0;
        unordered_map<int,int> m;
        int s = 0;

        for(int e = 0;e<n;e++){
            ans += nums[e];
            m[nums[e]]++;

            if(e-s+1 > k){
                ans -= nums[s];
                m[nums[s]]--;
                if(m[nums[s]] == 0){
                    m.erase(nums[s]);
                }
                s++;
            }

            if(e-s+1 == k && m.size() == k){
                maxSum = max(maxSum,ans);
            }
        }    
        return maxSum;        
    }
};
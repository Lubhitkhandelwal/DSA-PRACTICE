class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double ans = 0;
        double maxSum = INT_MIN;
        int s = 0;
        for(int e=0;e<n;e++){
            ans += nums[e];
            if(e-s+1 > k){
                ans-=nums[s];
                s++;
            }
            if(e-s+1 == k){
                maxSum = max(ans,maxSum);
            }
        }
        return maxSum/k;
    }
};
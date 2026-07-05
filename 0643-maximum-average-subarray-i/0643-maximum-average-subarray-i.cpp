class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double total = 0;
        for(int i=0;i<k;i++){
            total+=nums[i];
        }    
        double ans = total;
        for(int i=k;i<n;i++){
            total += nums[i];
            total -= nums[i-k];
            ans = max(ans,total);
        }
        return ans/k;
    }
};
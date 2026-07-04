class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double total = 0;
        for(int i=0;i<k;i++){
            total+=nums[i];
        }    
        double ans = total/k;
        int s = 1;
        int e = k;
        while(e<n){
            total -= nums[s-1];
            total += nums[e];
            ans = max(ans,total/k);
            s++;e++;
        }

        return ans;
    }
};
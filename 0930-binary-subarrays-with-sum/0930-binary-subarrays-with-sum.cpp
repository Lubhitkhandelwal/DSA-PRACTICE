class Solution {
public:
    int atMostK(vector<int>& nums, int k){
        if(k < 0) return 0;

        int s=0;int e=0;int total=0;int sum=0;

        while(e<nums.size()){
            sum += nums[e];
            while(sum > k){
                sum -= nums[s];
                s++;
            }

            total += e-s+1;
            e++;
        }
        return total;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMostK(nums,goal) - atMostK(nums,goal-1);
    }
};
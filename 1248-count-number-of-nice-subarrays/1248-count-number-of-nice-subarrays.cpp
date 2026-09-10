class Solution {
public:
    int atMostK(vector<int>& nums, int k){
        if(k<0) return 0;

        int s=0;
        int e=0;
        int sum=0;
        int total=0;
        
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

    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            nums[i] = nums[i]%2;
        }
        return atMostK(nums,k) - atMostK(nums,k-1);
    }
};
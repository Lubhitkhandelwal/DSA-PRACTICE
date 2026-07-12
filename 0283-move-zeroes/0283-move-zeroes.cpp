class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s = 0;
        int e = 0;
        while(e<nums.size()){
            if(nums[e]!=0){
                swap(nums[e],nums[s]);
                s++;
            }
            e++;
        }        
    }
};
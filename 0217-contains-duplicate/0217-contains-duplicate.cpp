class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // unordered_map<int,int> m;
        // for(auto& it:nums){
        //     if(m[it]>0){
        //         return true;
        //     }else{
        //         m[it]++;
        //     }
        // }
        // return false;

        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
    }
};
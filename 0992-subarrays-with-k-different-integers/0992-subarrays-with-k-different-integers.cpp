class Solution {
public:
    int atMostK(vector<int>& nums, int k){
        if(k<0) return 0;

        unordered_map<int,int> m;
        int s = 0;
        int e = 0;
        int count = 0;

        while(e<nums.size()){
            m[nums[e]]++;

            while(m.size() > k){
                m[nums[s]]--;
                if(m[nums[s]] == 0){
                    m.erase(nums[s]);
                }
                s++;
            }

            count += e-s+1;
            e++;
        }
        return count;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMostK(nums,k) - atMostK(nums,k-1);
    }
};
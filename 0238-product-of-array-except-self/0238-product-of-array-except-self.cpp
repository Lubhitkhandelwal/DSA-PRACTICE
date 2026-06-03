class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftP(n);
        vector<int> rightP(n);

        vector<int> ans;
        leftP[0] = 1;
        rightP[n-1] = 1;
        for(int i=0;i<n-1;i++){
            leftP[i+1] = nums[i]*leftP[i];
            rightP[n-i-2] = nums[n-i-1]*rightP[n-i-1];
        }
        for(int i=0;i<n;i++){
            ans.push_back(leftP[i]*rightP[i]);
        }
        return ans;
    }
};
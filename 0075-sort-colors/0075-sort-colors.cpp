class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int arr[3] = {0};
        for(int i=0;i<n;i++){
            arr[nums[i]]++;
        }      

        int idx = 0;
        for(int i=0;i<3;i++){
            for(int j=0;j<arr[i];j++){
                nums[idx] = i;
                idx++;    
            }
        }
    }
};
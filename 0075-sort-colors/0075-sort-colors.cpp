class Solution {
public:
    void sortColors(vector<int>& nums) {
        // int n = nums.size();
        // int arr[3] = {0};
        // for(int i=0;i<n;i++){
        //     arr[nums[i]]++;
        // }      

        // int idx = 0;
        // for(int i=0;i<3;i++){
        //     for(int j=0;j<arr[i];j++){
        //         nums[idx] = i;
        //         idx++;    
        //     }
        // }

        //Dutch National Flag Algorithm
        int low = 0;
        int mid = 0;
        int high = nums.size()-1;

        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[mid],nums[high]);
                high--;
                // mid++;
            }
        }
    }
};
class Solution {
public:

    void merge(vector<int>& nums, int s, int mid, int e){
        vector<int> temp;
        int low = s;
        int high = mid+1;
        while(low<=mid && high<=e){
            if(nums[low] < nums[high]){
                temp.push_back(nums[low]);
                low++;
            }else{
                temp.push_back(nums[high]);
                high++;
            }
        }
        while(low<=mid){
            temp.push_back(nums[low]);
            low++;
        }
        while(high<=e){
            temp.push_back(nums[high]);
            high++;
        }

        for(int i=s;i<=e;i++){
            nums[i] = temp[i-s];
        }
    }

    void helper(vector<int>& nums, int s, int e){
        if(s>=e){
            return;
        }
        int mid = (s+e)/2;
        helper(nums,s,mid);
        helper(nums,mid+1,e);

        merge(nums,s,mid,e);
    }

    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        helper(nums,0,n-1);
        return nums;        
    }
};
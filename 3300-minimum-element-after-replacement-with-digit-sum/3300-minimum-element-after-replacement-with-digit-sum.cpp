class Solution {
public:
    int add(int num){
        int sum = 0;
        while(num>=1){
            sum+=num%10;
            num=num/10;
        }
        return sum;
    }

    int minElement(vector<int>& nums) {
        int minE = INT_MAX;
        for(int i=0;i<nums.size();i++){
            minE = min(minE,add(nums[i]));
        }    
        return minE;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // Solution if use of Hashmap is not allowed
        vector<pair<int,int>> temp;
        int n = nums.size();

        for(int i=0;i<n;i++){
            temp.push_back({nums[i],i});
        }

        int sum = 0;
        sort(temp.begin(),temp.end());
        int i=0,j=n-1;
        while(i<j){
            sum = temp[i].first+temp[j].first;
            if(sum<target){
                i++;
            }else if(sum>target){
                j--;
            }else{
                return {temp[i].second,temp[j].second};
            }
        }
        return {-1,-1};

        // If hashmap is allowed
        // int n = nums.size();
        // unordered_map<int,int> m;
        // for(int i=0;i<n;i++){
        //     int comp = target - nums[i];

        //     if(m.find(comp)!=m.end()){
        //         return {m[comp],i};
        //     }

        //     m[nums[i]] = i;
        // }
        // return {-1,-1};
    }
};
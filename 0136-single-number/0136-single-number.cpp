class Solution {
public:
    int singleNumber(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int ans = arr[0];
        for(int i=1;i<arr.size();i++){
            ans = ans^arr[i];
        }    
        return ans;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxV = prices[n-1];
        int ans = 0;

        for(int i=n-2;i>=0;i--){
            maxV = max(maxV,prices[i]);
            ans = max(ans,maxV-prices[i]);
        }    
        return ans;
    }
};
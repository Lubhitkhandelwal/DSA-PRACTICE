class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> m;
        int n = fruits.size();
        int ans = 0;

        int s = 0;
        for(int e=0;e<n;e++){
            m[fruits[e]]++;

            while(m.size()>2){
                m[fruits[s]]--;
                if(m[fruits[s]] == 0){
                    m.erase(fruits[s]);
                }
                s++;
            }

            if(m.size() <= 2){
                ans = max(ans,e-s+1);
            }
        }    

        return ans;
    }
};
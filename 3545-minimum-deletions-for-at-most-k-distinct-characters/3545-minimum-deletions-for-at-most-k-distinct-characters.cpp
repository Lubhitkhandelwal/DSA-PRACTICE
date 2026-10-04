class Solution {
public:
    int minDeletion(string s, int k) {
        map<char,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }    

        int n = m.size();
        if(n <= k) return 0;
        int z = n - k;

        vector<pair<char, int>> vec(m.begin(), m.end());

        sort(vec.begin(), vec.end(), [](pair<char, int>& a, pair<char, int>& b) {
            return a.second < b.second;
        });

        int sum = 0;
        for(int i=0;i<z;i++){
            sum += vec[i].second;
        }
        return sum;
    }
};
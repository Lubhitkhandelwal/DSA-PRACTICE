class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans = 0;
        unordered_set<char> charSet;   
        int i = 0;

        for(int e=0;e<n;e++){
            if(charSet.count(s[e]) == 0){
                charSet.insert(s[e]);
                ans = max(ans,e-i+1);
            }else{
                while(charSet.count(s[e])){
                    charSet.erase(s[i]);
                    i++;
                }
                charSet.insert(s[e]);
            }
        }    
        return ans;

    }
};
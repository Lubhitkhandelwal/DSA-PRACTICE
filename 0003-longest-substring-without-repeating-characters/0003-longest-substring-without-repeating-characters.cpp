class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;
        int maxLen = 0;
        int n = s.size();
        int i = 0;

        for(int e=0;e<n;e++){
            
            if(charSet.find(s[e]) == 0){
                charSet.insert(s[e]);
                maxLen = max(maxLen,e-i+1);
            }else{
                while(charSet.find(s[e]) != 0){
                    charSet.erase(s[i]);
                    i++;
                }
                charSet.insert(s[e]);
            }

        }    
        
        return maxLen;
    }
};
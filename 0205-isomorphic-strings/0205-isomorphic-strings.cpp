class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;

        unordered_map<char,char>st;
        unordered_map<char,char>ts;

        int n = s.size();
        int i=0;
        while(i<n){

            if(st.count(s[i]) && st[s[i]]!=t[i]) return false;
            if(ts.count(t[i]) && ts[t[i]]!=s[i]) return false;

            st[s[i]] = t[i];
            ts[t[i]] = s[i];
            i++;
        }
        return true; 
    }
};
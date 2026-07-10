class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        
        int k = s1.size();
        int n = s2.size();

        if(k > n) return false;
        int s=0;
        for(int i=0;i<k;i++){
            m1[s1[i]]++;
            m2[s2[i]]++;
        } 
        
        if(m1 == m2) return true;

        for(int e=k;e<n;e++){
            m2[s2[e]]++;
            m2[s2[s]]--;
            if(m2[s2[s]] == 0){
                m2.erase(s2[s]);
            }
            s++;

            if(m1 == m2) return true;
        }
        return false;
    }
};
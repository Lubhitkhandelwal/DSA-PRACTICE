class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int n = s.size();
        int val = 0;
        int i = 0;

        while(i<n){
            
            if(s[i]=='(' && val>0){
                ans+=s[i];
            }
            
            if(s[i]=='('){
                val++;
            }else if(s[i]==')'){
                val--;
            }

            if(s[i]==')' && val>0){
                ans+=s[i];
            }

            i++;
        }
        return ans;
    }
};
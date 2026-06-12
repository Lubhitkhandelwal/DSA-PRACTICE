class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string ans="";
        vector<string> arr;
        int i=0;
        int start,end;
        while(i<n){
            while(i<n && s[i]==' ')i++;

            if(i>=n) break;

            start = i;
            while(i<n && s[i]!=' ')i++;
            end = i-1;

            string word = s.substr(start,end-start+1);
            arr.push_back(word);
        }    
        for(int i=arr.size()-1;i>=0;i--){
            ans+=arr[i];
            if(i!=0)ans+=" ";
        }
        return ans;
    }
};
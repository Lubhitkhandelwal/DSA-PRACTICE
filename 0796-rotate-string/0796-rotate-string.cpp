class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        return (s+s).find(goal)!=string::npos;
        // string newS = s+s;
        // int n = s.size();
        // int st = 0;
        // while(st<n){
        //     if(newS.substr(st,n)==goal){
        //         return true;
        //     }
        //     st++;
        // }   
        // return false; 
    }
};
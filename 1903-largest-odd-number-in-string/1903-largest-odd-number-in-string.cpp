class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        int i = n-1;
        while(i>=0){
            if(num[i]%2==0){
                num.pop_back();
            }else{
                break;
            }
            i--;
        }  
        return num;  
    }
};
class Solution {
public:
    int mirrorDistance(int n) {
        int m = 0;
        int t = n;
        while(t>0){
            m = m*10 + (t%10);
            t = t/10;
        }
        return abs(m-n);
    }
};
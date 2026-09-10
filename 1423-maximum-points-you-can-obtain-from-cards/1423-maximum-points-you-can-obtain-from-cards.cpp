class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        
        int total = 0;
        for(int i=0;i<n;i++){
            total += cardPoints[i];
        } 

        int win = n-k;
        int temp = 0;
        for(int i=0;i<win;i++){
            temp += cardPoints[i];
        }
        int minV = temp;

        int s = 0;
        int e = win;
        while(e<n){
            temp -= cardPoints[s];
            temp += cardPoints[e];

            minV = min(minV,temp);
            s++;e++;
        }
        return total - minV;
    }
};
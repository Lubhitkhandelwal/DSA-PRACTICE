class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = 0;
        int sumEven = 0;
        int a = 1;
        int b = 2;
        int k = 0;

        while(k<n){
            a+=2;b+=2;
            sumOdd += a;
            sumEven += b;
            k++;
        }

        return gcd(sumOdd,sumEven);
            
    }
};
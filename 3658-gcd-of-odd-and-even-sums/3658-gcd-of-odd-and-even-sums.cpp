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

        a = sumEven;
        b = sumOdd;
        
        while(a%b != 0){
            int rem = a%b;
            a = b;
            b = rem;
        }

        return b;
    }
};
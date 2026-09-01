class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        long long  oddSum=n*n;
        long long  evenSum=n*n+n;
        return __gcd(oddSum,evenSum);
    }
};
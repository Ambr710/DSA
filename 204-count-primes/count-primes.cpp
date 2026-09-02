class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0;
    vector<int> prime(n,1);
    prime[0]=prime[1]=0;
            // Remove all even numbers
    for(int i=4;i<n;i+=2){
        prime[i]=0;
    }
    // Only odd numbers
    for(int i=3;i*i<n;i+=2){
        if(prime[i]==1){
                            // Only odd multiples

            for(int j=i*i;j<n;j+=2*i){
                prime[j]=0;
            }
        }
}
        int cnt=1;
        // Only check odd numbers
        for(int i=3;i<n;i++){
            cnt+=prime[i];
        }
        return cnt;
    }
};
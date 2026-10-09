class Solution {
public:
    bool isPerfectSquare(int num) {
        int lo=0;
        int hi=num;
        int ans=-1;
        auto helper=[&](long long mid)->bool{
            return mid*mid<=num;
        };
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(helper(mid)){
                ans=mid;
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return 1LL*ans*ans==num;
    }
};
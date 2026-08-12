class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int> mpp;
        mpp[0]=1;
        int prefixsum=0;
        int ans=0;
        
        for(int i=0;i<n;i++){
            prefixsum+=nums[i];

            int rem=(prefixsum%k+k)%k;

            if(mpp.find(rem)!=mpp.end()){
                ans+=mpp[rem];
            }
            mpp[rem]++;
            
        }
        return ans;
    }
};
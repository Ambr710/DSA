class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int,int> mp;
        mp[0]=-1;
        int prefixsum=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) prefixsum--;
            else prefixsum++;

            if(mp.find(prefixsum)!=mp.end()){
                ans=max(ans,i-mp[prefixsum]);
            }
            else{
                mp[prefixsum]=i;
            }
        }
        return ans;

    }
};
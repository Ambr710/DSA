class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int leftsum=0;
            for(int j=0;j<i;j++){
                leftsum+=nums[j];
            }
            int rightsum=0;
            for(int k=i+1;k<n;k++){
                rightsum+=nums[k];
            }
            if(leftsum==rightsum) return i;
        }
        return -1;
    }
};
class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        set<int> s;

        for(int x:nums){
            for(int i=2;i*i<=x;i++){
                if(x%i==0){
                    s.insert(i);
                    
                    while(x%i==0){
                        x/=i;
                    }
                }
            }
            if(x>1)s.insert(x);
        }
        return s.size();
        
    }
};
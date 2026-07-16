class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mpp;
        for(int i=0;i<s.length();i++) mpp[s[i]]++;
         
         vector<pair<char,int>> v;
         for(auto &it:mpp){
            v.push_back(it);
         }
         sort(v.begin(),v.end(),[](pair<char,int> a,pair<char,int>b){
            return a.second > b.second;
         });
         string z="";
         for(int i=0;i<v.size();i++){
            z+=string(v[i].second,v[i].first);
         }

         return z;
    }
};
class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        map<int,int>m;
        for(auto x:nums){
            m[x]++;
        }
        vector<int>ans;
        for(auto x:m){
            if(m[x.first-1]==0 and m[x.first+1]==0 and x.second==1){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};
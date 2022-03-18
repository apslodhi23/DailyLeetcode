class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(auto x:nums){
            int k=to_string(x).length();
            if(k%2==0){
                ans++;
            }
        }
        return ans;
    }
};
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int i=0;
        for(auto x:nums){
            if(x==0){
                ans=max(ans,i);
                i=0;
            }else{
                i++;
            }
        }
        return max(i,ans);
    }
};
class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,1),cnt(n,1);
        int k=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j] and dp[i]<dp[j]+1){
                    dp[i]=1+dp[j];
                    cnt[i]=cnt[j];
                }else if(nums[i]>nums[j] and dp[i]==dp[j]+1){
                    cnt[i]+=cnt[j];
                }
            }
            k=max(k,dp[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(dp[i]==k){
                ans+=cnt[i];
            }
        }
        return ans;
    }
};
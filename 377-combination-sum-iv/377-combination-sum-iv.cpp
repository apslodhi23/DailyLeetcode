class Solution {
public:
    int dp[1001];
    int fun(vector<int>&arr,int tar){
        if(tar==0){
            return 1;
        }
        if(dp[tar]!=-1){
            return dp[tar];
        }
        dp[tar]=0;
        for(auto x:arr){
            if(x<=tar){
                dp[tar]+=fun(arr,tar-x);
            }
        }
        return dp[tar];
    }
    int combinationSum4(vector<int>& nums, int target) {
        memset(dp,-1,sizeof(dp));
        return fun(nums,target);  
    }
};
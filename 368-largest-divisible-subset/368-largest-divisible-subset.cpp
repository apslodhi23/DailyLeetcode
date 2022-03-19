class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>dp(n,1);
        vector<int>ind(n);
        int an=-1,mx=-1;
        for(int i=0;i<n;i++){
            dp[i]=1;
            ind[i]=-1;
            for(int j=i-1;j>=0;j--){
                if(nums[i]%nums[j]==0){
                    if(dp[i]<dp[j]+1){
                        dp[i]=1+dp[j];
                        ind[i]=j;
                    }
                }
            }
            if(dp[i]>mx){
                mx=dp[i];
                an=i;
            }
        }
        while(an!=-1){
            ans.push_back(nums[an]);
            an=ind[an];
        }
        return ans;
    }
};
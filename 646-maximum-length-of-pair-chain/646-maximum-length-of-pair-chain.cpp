class Solution {
public:
    int findLongestChain(vector<vector<int>>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<int>dp(n,1);
        int ans=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(arr[i][0]>arr[j][1] and dp[i]<dp[j]+1){
                    dp[i]=dp[j]+1;
                }
            }
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};
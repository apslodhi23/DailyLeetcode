class Solution {
public:
    int fun(vector<vector<int>>&arr,int i,int j,int n,int m,vector<vector<int>>&dp){
        if(i<0 or i>=n or j<0 or j>=m){
            return INT_MAX;
        }
        if(i==n-1){
            return arr[i][j];
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        return dp[i][j]=arr[i][j]+min(fun(arr,i+1,j,n,m,dp),min(fun(arr,i+1,j+1,n,m,dp),fun(arr,i+1,j-1,n,m,dp)));
    }
    int minFallingPathSum(vector<vector<int>>& arr) {
        int ans=INT_MAX;
        int n=arr.size();
        int m=arr[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        for(int i=0;i<m;i++){
            ans=min(ans,fun(arr,0,i,n,m,dp));
        }
        return ans;
    }
};
class Solution {
public:
    int fun(vector<vector<int>>&mat,int i,int j,int n,int m,vector<vector<int>>&dp){
        if(i==n or j==m){
            return 1e9;
        }
        if(i==n-1 and j==m-1){
            return mat[i][j]<=0? -mat[i][j]+1:1;
        }
        if(dp[i][j]!=1e9){
            return dp[i][j];
        }
        int l=fun(mat,i+1,j,n,m,dp);
        int r=fun(mat,i,j+1,n,m,dp);
        int d=min(l,r)-mat[i][j];
        return dp[i][j]=d<=0?1:d;
    }
    int calculateMinimumHP(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,1e9));
        return (fun(arr ,0,0,n,m,dp));
    }
};
class Solution {
public:
    int dp[201][201];
    int fun(vector<vector<int>>&arr,int i,int j,int n,int m){
        if(i<0 or i>=n or j<0 or j>=m){
            return INT_MAX;
        }
        if(i==n-1 and j==m-1){
            return arr[i][j];
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        return dp[i][j]=arr[i][j]+min(fun(arr,i+1,j,n,m),fun(arr,i,j+1,n,m));
    }
    int minPathSum(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        return fun(grid,0,0,grid.size(),grid[0].size());
    }
};
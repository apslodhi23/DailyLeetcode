class Solution {
public:
    int ans=0;
    int dp[101][101];
    int  fun(vector<vector<int>>arr,int i, int j,int n,int m){
        if(i<0 or j<0 or i>=n or j>=m or arr[i][j]!=0){
            return 0;
        }
        arr[i][j]=1;
        if(i==n-1 and j==m-1){
            // ans++;
            return 1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        dp[i][j]=fun(arr,i+1,j,n,m)+fun(arr,i,j+1,n,m);
        return dp[i][j];
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        memset(dp,-1,sizeof(dp));
        return fun(arr,0,0,n,m);
        // return ans;
    }
};
// class Solution {
// public:
//     int fun(vector<vector<int>>&arr,int i,int j,int n,int m,vector<vector<int>>&dp){
//         if(i<0 or i>=n or j<0 or j>=m){
//             return INT_MAX;
//         }
//         if(i==n-1){
//             return arr[i][j];
//         }
//         if(dp[i][j]!=-1){
//             return dp[i][j];
//         }
//         return dp[i][j]=arr[i][j]+min(fun(arr,i+1,j,n,m,dp),min(fun(arr,i+1,j+1,n,m,dp),fun(arr,i+1,j-1,n,m,dp)));
//     }
//     int minFallingPathSum(vector<vector<int>>& arr) {
//         int ans=INT_MAX;
//         int n=arr.size();
//         int m=arr[0].size();
//         vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
//         for(int i=0;i<m;i++){
//             ans=min(ans,fun(arr,0,i,n,m,dp));
//         }
//         return ans;
//     }
// };




// top dowmn

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        for(int i=n-2;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(j==0){
                    mat[i][j]+=min(mat[i+1][j],mat[i+1][j+1]);
                }
                else if(j==m-1){
                    mat[i][j]+=min(mat[i+1][j],mat[i+1][j-1]);
                }
                else{
                    mat[i][j]+=min({mat[i+1][j],mat[i+1][j+1],mat[i+1][j-1]});
                }
            }
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<mat[i][j]<<' ';
        //     }
        //     cout<<endl;
        // }
        int ans=INT_MAX;
        for(int i=0;i<m;i++){
            ans=min(ans,mat[0][i]);
        }
        return ans;
    }
};
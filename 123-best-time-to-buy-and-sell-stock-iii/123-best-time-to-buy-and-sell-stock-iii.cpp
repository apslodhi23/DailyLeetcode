class Solution {
public:
    int dp[100001][2][3];
    int fun(vector<int>&arr,int i,int c,int cap,int n){
        if(i>=n){
            return 0;
        }
        if(cap==0){
            return 0;
        }
        if(dp[i][c][cap]!=-1){
            return dp[i][c][cap];
        }
        if(c==1){
            return dp[i][c][cap]=max(-arr[i]+fun(arr,i+1,0,cap,n),fun(arr,i+1,1,cap,n));
        }else{
            return dp[i][c][cap]=max(arr[i]+fun(arr,i+1,1,cap-1,n),fun(arr,i+1,0,cap,n));
        }
    }
    int maxProfit(vector<int>& arr) {
        memset(dp,-1,sizeof(dp));
        return fun(arr,0,1,2,arr.size());
    }
};
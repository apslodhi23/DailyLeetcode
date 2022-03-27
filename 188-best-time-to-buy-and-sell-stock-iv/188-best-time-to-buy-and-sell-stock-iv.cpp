class Solution {
public:
    int dp[1001][2][101];
    int fun(vector<int>arr,int i,int c,int k){
        if(i==arr.size()){
            return 0;
        }
        if(k==0){
            return 0;
        }
        if(dp[i][c][k]!=-1){
            return dp[i][c][k];
        }
        if(c){
            return dp[i][c][k]=max(-arr[i]+fun(arr,i+1,0,k),fun(arr,i+1,1,k));
        }
        else{
            return dp[i][c][k]=max(arr[i]+fun(arr,i+1,1,k-1),fun(arr,i+1,0,k));
        }
    }
    int maxProfit(int k, vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
        return fun(prices,0,1,k);
    }
};
class Solution {
public:
    int dp[10001][13];
    int fun(vector<int>&arr,int am,int n){
        if(am==0 or n==0){
            if(am==0){
                return 0;
            }
            return INT_MAX-1;
        }
        if(dp[am][n]!=-1){
            return dp[am][n];
        }
        if(arr[n-1]>am){
            dp[am][n]=fun(arr,am,n-1);
        }
        else{
            dp[am][n]=min(fun(arr,am,n-1),1+fun(arr,am-arr[n-1],n));
        }
        return dp[am][n];
    }
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));
        int n=coins.size();
        int x=fun(coins,amount,n);
        if(x==INT_MAX-1){
            return -1;
        }
        return x;
    }
};
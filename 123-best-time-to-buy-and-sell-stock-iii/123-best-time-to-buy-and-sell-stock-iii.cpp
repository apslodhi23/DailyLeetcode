class Solution {
public:
    int dp[100001][2][3];
    int fun(vector<int>&arr,int c,int cap,int i){
        if(i==arr.size()){
            return 0;
        }
        if(cap==0){
            return 0;
        }
        if(dp[i][c][cap]!=-1){
            return dp[i][c][cap];
        }
        if(c){
            return dp[i][c][cap]= max(-arr[i]+fun(arr,0,cap,i+1), fun(arr,1,cap,i+1));
        }else{
            return dp[i][c][cap]=max(arr[i]+fun(arr,1,cap-1,i+1),fun(arr,0,cap,i+1));
        }
    }
    int maxProfit(vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
        return fun(prices,1,2,0);
    }
};
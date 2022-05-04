class Solution {
public:
    int dp[100001][3];
    int fun(vector<int>&arr,int i,int st,int ti){
        if(i==arr.size()){
            return 0;
        }
        if(dp[i][st]!=-1){
            return dp[i][st];
        }
        if(st==0){
            return dp[i][st]=max(-arr[i]+fun(arr,i+1,1,ti),fun(arr,i+1,st,ti));
        }else{
            return dp[i][st]=max(arr[i]+fun(arr,i+1,0,ti-1),fun(arr,i+1,st,ti));
        }
        return dp[i][st]=0;
    }
    int maxProfit(vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
        return fun(prices,0,0,1);
    }
};
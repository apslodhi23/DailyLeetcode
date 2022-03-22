class Solution {
public:
    int dp[301][5001];
    int fun(vector<int>&arr,int am,int n){
        if(n==0 or am==0){
            if(am==0){
                return 1;
            }
            return 0;
        }
        if(dp[n][am]!=-1){
            return dp[n][am];
        }
        if(arr[n-1]<=am){
            int ans=fun(arr,am,n-1);
            ans+=fun(arr,am-arr[n-1],n);
            return dp[n][am]=ans;
        }
        return dp[n][am]=fun(arr,am,n-1);
    }
    int change(int a, vector<int>& arr) {
        int n=arr.size();
        memset(dp,-1,sizeof(dp));
        return fun(arr,a,n);
    }
};
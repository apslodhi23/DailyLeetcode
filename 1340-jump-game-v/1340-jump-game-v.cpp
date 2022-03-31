class Solution {
public:
    int dp[1001];
    int fun(vector<int>&arr,int d,int i,int val,int n){
        if(dp[i]!=-1){
            return dp[i];
        }
        int ans=0;
        for(int j=i+1;j<=min(i+d,n-1);j++){
            if(arr[j]>=val){
                break;
            }else{
                ans=max(ans, fun(arr,d,j,arr[j],n));
            }
        }
        for(int j=i-1;j>=max(0,i-d);j--){
            if(arr[j]>=val){
                break;
            }
            else{
                ans=max(ans ,fun(arr,d,j,arr[j],n));
            }
        }
        return dp[i]=ans+1;
    }
    int maxJumps(vector<int>& arr, int d) {
        int ans=0;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<arr.size();i++){
            ans=max(ans,fun(arr,d,i,arr[i],arr.size()));
        }
        return ans;
    }
};
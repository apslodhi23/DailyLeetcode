class Solution {
public:
    int dp[1001];
    int fun(vector<int>&arr,int d,int i,int n){
        if(dp[i]!=-1){
            return dp[i];
        }
        int ans=0;
        for(int j=i+1;j<=i+d and j<n ;j++){
            if(arr[j]>=arr[i]){
                break;
            }else{
                ans=max(ans,fun(arr,d,j,n));
            }
        }
        for(int j=i-1; j>=(i-d) and j>=0 ; j--){
            if(arr[j]>=arr[i]){
                break;
            }
            else{
                ans=max(ans,fun(arr,d,j,n));
            }
        }
        return dp[i]=ans+1;
    }
    int maxJumps(vector<int>& arr, int d) {
        int ans=0;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<arr.size();i++){
            ans=max(ans,fun(arr,d,i,arr.size()));
        }
        return ans;
    }
};
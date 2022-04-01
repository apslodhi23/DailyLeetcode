class Solution {
public:
    int dp[1001][51];
    int fun(vector<int>&arr,int i,int m){
        if(m==0 and i>=arr.size()){
            return 0;
        }
        
        if(m==0 or i>=arr.size()){
            return INT_MAX;
        }
        if(dp[i][m]!=-1){
            return dp[i][m];
        }
        int sum=0;
        int ans=INT_MAX;
        for(int j=i;j<arr.size();j++){
            sum+=arr[j];
            int k=max(sum,fun(arr,j+1,m-1));
            ans=min(ans,k);
       }
        return dp[i][m]=ans;
    }
    int splitArray(vector<int>& nums, int m) {
        memset(dp,-1,sizeof(dp));
        return fun(nums,0,m);
    }
};
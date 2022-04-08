class Solution {
public:
    int dp[502][502];
    int recur(vector<int>&arr,int i,int t){
        if(i>=arr.size()){
            return 0;
        }
        if(dp[i][t]!=-1){
            return dp[i][t];
        }
        int k=arr[i]*t+recur(arr,i+1,t+1);
        int k2=recur(arr,i+1,t);
        return dp[i][t]=max(k,k2);
    }
    int maxSatisfaction(vector<int>& arr) {
        memset(dp,-1,sizeof(dp));
        sort(arr.begin(),arr.end());
        return recur(arr,0,1);
    }
};
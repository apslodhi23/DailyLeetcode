class Solution {
public:
    long long dp[2000005];
    long long fun(vector<vector<int>>&arr,int i){
        if(i>=arr.size()){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        return dp[i]=max(arr[i][0]+fun(arr,1+i+arr[i][1]), fun(arr,i+1));
    }
    long long mostPoints(vector<vector<int>>& questions) {
        memset(dp,-1,sizeof(dp));
        return fun(questions,0);
    }
};
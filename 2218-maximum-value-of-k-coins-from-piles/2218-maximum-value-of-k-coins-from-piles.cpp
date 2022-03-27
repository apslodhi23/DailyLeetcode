class Solution {
public:
    vector<vector<int>>dp;
    int fun(int i,vector<vector<int>>&p,int k){
        if(i==p.size()){
            return 0;
        }
        if(dp[i][k]!=-1){
            return dp[i][k];
        }
        int ans=fun(i+1,p,k);
        int a=0;
        for(int j=0;j<p[i].size() and j<k ;j++){
            a+=p[i][j];
            ans=max(ans,a+fun(i+1,p,k-j-1));
        }
        return dp[i][k]=ans;
    }
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        dp=vector<vector<int>>(piles.size()+1,vector<int>(k+1,-1));
        return fun(0,piles,k);
    }
};

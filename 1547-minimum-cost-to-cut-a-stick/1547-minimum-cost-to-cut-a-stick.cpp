class Solution {
public:
    int dp[101][101];
    int fun(int s,int e,vector<int>&cuts,int i,int j){
        if(i>j){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int minn=INT_MAX;
        for(int k=i;k<=j;k++){
            minn=min(minn,e-s+fun(s,cuts[k],cuts,i,k-1)+fun(cuts[k],e,cuts,k+1,j));
        }
        return dp[i][j]=minn;
    }
    int minCost(int n, vector<int>& cuts) {
        memset(dp,-1,sizeof(dp));
        sort(cuts.begin(),cuts.end());
        return fun(0,n,cuts,0,cuts.size()-1);
    }
};
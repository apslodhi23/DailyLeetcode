class Solution {
public:
    int dp[501][501];
    int solve(string &s,string &s1,int n,int m){
        
        if(n==0 or m==0)return 0;
        
        if(dp[n][m]!=-1)return dp[n][m];
        
        if(s[n-1]==s1[m-1]){
            return dp[n][m]=1+solve(s,s1,n-1,m-1);
        }
        else{
            return dp[n][m]=max(solve(s,s1,n-1,m),solve(s,s1,n,m-1));
        }
        
    }
    int minInsertions(string s) {
        memset(dp,-1,sizeof(dp));
        string s1=s;
        reverse(s1.begin(),s1.end());
        int ans=solve(s,s1,s.size(),s1.size());
        
        return s1.size()-ans;
    }
};
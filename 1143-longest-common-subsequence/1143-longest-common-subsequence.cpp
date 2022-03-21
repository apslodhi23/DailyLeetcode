class Solution {
public:
    int dp[1001][1001];
    int fun(string &s,string &k,int i ,int j){
        if(i<0 or j<0){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s[i]==k[j]){
            return dp[i][j]=1+fun(s,k,i-1,j-1);
        }
        else{
            int x=fun(s,k,i-1,j);
            int y=fun(s,k,i,j-1);
            return dp[i][j]=max(x,y);
        }
        return 0;
    }
    int longestCommonSubsequence(string s, string k) {
        int n=s.length();
        int m=k.length();
        memset(dp,-1,sizeof(dp));
        return fun(s,k,n-1,m-1);
    }
};
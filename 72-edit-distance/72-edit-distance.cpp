class Solution {
public:
    int dp[501][501];
    int fun(string s1,string s2,int n,int m){
        if(n==0 and m==0){
            return 0;
        }
        if(n!=0 and m==0){
            return n;
        }
        if(n==0 and m!=0){
            return m;
        }
        if(dp[n][m]!=-1){
            return dp[n][m];
        }
        if(s1[n-1]==s2[m-1]){
            return dp[n][m]=fun(s1,s2,n-1,m-1);
        }
        return  dp[n][m]=1+min({fun(s1,s2,n-1,m),fun(s1,s2,n-1,m-1),fun(s1,s2,n,m-1)});
    }
    int minDistance(string word1, string word2) {
        memset(dp,-1,sizeof(dp));
        return fun(word1,word2,word1.length(),word2.length());
    }
};
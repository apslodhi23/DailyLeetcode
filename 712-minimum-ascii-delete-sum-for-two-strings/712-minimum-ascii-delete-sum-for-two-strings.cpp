class Solution {
public:
    int dp[1001][1001];
    int fun(string &s1,string &s2,int n,int m){
        if(n==0 and m==0){
            return 0;
        }
        if(n==0){
            return (int)s2[m-1]+fun(s1,s2,n,m-1);
        }
        if(m==0){
            return (int)s1[n-1]+fun(s1,s2,n-1,m);
        }
        if(dp[n][m]!=-1){
            return dp[n][m];
        }
        if(s1[n-1]==s2[m-1]){
            return dp[n][m]=fun(s1,s2,n-1,m-1);
        }
        else{
            return dp[n][m]=min({(int)s1[n-1]+(int)s2[m-1]+fun(s1,s2,n-1,m-1) ,(int)s1[n-1]+fun(s1,s2,n-1,m) ,(int)s2[m-1]+fun(s1,s2,n,m-1)  });
        }
    }
    int minimumDeleteSum(string s1, string s2) {
        memset(dp,-1,sizeof(dp));
        int n=s1.length();
        int m=s2.length();
        return fun(s1,s2,n,m);
    }
};
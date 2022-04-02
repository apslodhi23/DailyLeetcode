class Solution {
public:
    long long mod=1e9+7;
    long long dp[100005][4];
    long long  fun(string &s,long long i,long long  c){
       if(i>=s.length()){
           if(c==2)
           return 1;
           return 0;
       }
        if(dp[i][c]!=-1){
            return dp[i][c]%mod;
        }
        if(s[i]=='S'){
            c++;
        }
        if(c<2){
            return dp[i][c]=(fun(s,i+1,c))%mod;
        }else{
            if(c==2){
                return dp[i][c]=(fun(s,i+1,c)+fun(s,i+1,0))%mod;
            }
            return dp[i][c]=0;
        }
    }
    int numberOfWays(string s) {
        memset(dp,-1,sizeof(dp));
        return fun(s,0,0);
    }
};
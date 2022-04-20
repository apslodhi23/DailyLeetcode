class Solution {
public:
    int dp[101];
    int fun(string s,int i){
        if(i>=s.length()){
            return 1;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int k=0;
        if(s[i]=='0'){
            return 0;
        }
        int ans=0;
        for(int j=i;j<(min(i+2,(int)s.length()));j++){
            k=k*10+s[j]-'0';
            if(k>0 and k<=26){
                ans +=fun(s,j+1);
            }
        }
        return dp[i]=ans;
    }
    int numDecodings(string s) {
        memset(dp,-1,sizeof(dp));
        return fun(s,0);
    }
};
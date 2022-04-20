class Solution {
public:
    int dp[2001][2001];
    bool plain(string &s,int l,int r){
        while(l<=r){
            
            if(s[l]!=s[r]){
                return false;
            }
            l++;r--;
        }
        return true;
    }
    int fun(string &s,int l,int r){
        if(l>=r or plain(s,l,r)){
            return dp[l][r]=0;
        }
        if(dp[l][r]!=-1){
            return dp[l][r];
        }
        int ans=INT_MAX;
        for(int i=l;i<r;i++){
            if(plain(s,l,i)){
                ans=min(ans, 1+fun(s,i+1,r));
            }
        }
        return dp[l][r]=ans;
        
    }
    int minCut(string s) {
        memset(dp,-1,sizeof(dp));
        return fun(s,0,s.length()-1);
    }
};
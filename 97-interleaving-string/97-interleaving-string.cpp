class Solution {
public:
    int dp[101][101][201];
    bool fun(string s1,string s2,string s3,int i,int j,int k){
        if(k==s3.length() and j==s2.length() and i==s1.length()){
            return 1;
        }
        if(k==s3.length()){
            if(i!=s1.length() or j!=s2.length()){
                return 0;
            }
        }
        if(dp[i][j][k]!=-1){
            return dp[i][j][k];
        }
        if(s1[i]==s3[k] and s2[j]==s3[k]){
            return dp[i][j][k]=fun(s1,s2,s3,i+1,j,k+1) or fun(s1,s2,s3,i,j+1,k+1);
        }else if(s1[i]==s3[k]){
            return dp[i][j][k]=fun(s1,s2,s3,i+1,j,k+1);
        }else if(s2[j]==s3[k]){
            return dp[i][j][k]=fun(s1,s2,s3,i,j+1,k+1);
        }
        return false;
    }
    bool isInterleave(string s1, string s2, string s3) {
        memset(dp,-1,sizeof(dp));
        return fun(s1,s2,s3,0,0,0);
    }
};
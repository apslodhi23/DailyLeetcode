class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int n=stones.size();
        if(n==1){
            return stones[0];
        }
        int sum=0;
        for(int i=0;i<stones.size();i++){
            sum+=stones[i];
        }
        vector<vector<bool>>dp(n+1,vector<bool>(sum+1,0));
        for(int i=0;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if(i==0 && j==0){
                    dp[i][j]=0;
                }
                else if(i==0){
                    dp[i][j]=0;
                }
                else if(j==0){
                    dp[i][j]=1;
                }
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(stones[i-1]<=j){
                    dp[i][j]=(dp[i-1][j] || dp[i-1][j-stones[i-1]]);
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        int y=INT_MAX;
        // int x;
        for(int i=1;i<=sum;i++){
            if(dp[n][i]==true){
                int s1=i;
                int s2=sum-i;
                if(abs(s1-s2)<y){
                    y=abs(s1-s2);
                }
            }
        }
        return y;
    }
};
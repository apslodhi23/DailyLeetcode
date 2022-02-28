class Solution {
public:
    int besttime[1001];
    
    int max_lap=INT_MIN;
    int f(int n ,int c,vector<int>&dp){
        if(n==0){
            return 0-c;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        int mini=1e9;
        for(int i=1;i<=min(n,max_lap);i++){
            int tt=besttime[i]+c+f(n-i,c,dp);
            mini=min(mini,tt);
        }
            return dp[n]=mini;
    }
    int minimumFinishTime(vector<vector<int>>& tires, int changeTime, int numLaps) {
        for(int i=0;i<=numLaps;i++){
            besttime[i]=INT_MAX;
        }
        for(auto it:tires){
            int fi=it[0];
            int ri=it[1];
            long long currlap=fi;
            long long time=fi;
            for(int i=1;i<=numLaps and currlap<changeTime+fi;i++){
                if(time<besttime[i]){
                    besttime[i]=time;
                }
                max_lap=max(max_lap,i);
                currlap*=ri;
                time+=currlap;
            }
          
        }
        vector<int>dp(1001,-1);
        return f(numLaps,changeTime,dp);
    }
};
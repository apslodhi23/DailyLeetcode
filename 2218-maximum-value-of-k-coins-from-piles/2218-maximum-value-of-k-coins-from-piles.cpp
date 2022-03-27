class Solution {
public:
    vector<vector<int>> dp;
    
    int func(vector<vector<int>>& p,int i,int k){
        if(i==p.size()) 
		return 0;

	// if present in dp return
        if(dp[i][k]!=-1) 
		return dp[i][k];

	//dont take from that pile
        int ans=func(p,i+1,k);

        int a=0;
        for(int j=0;j<p[i].size()&&j<k;j++){
		//take some certain prefix from that pile, if we can take that much elements.
            a+=p[i][j];
            ans=max(ans,a+func(p,i+1,k-j-1));
        }
		//return max
        return dp[i][k]=ans;
    }

    int maxValueOfCoins(vector<vector<int>>& p, int k) {

        dp=vector<vector<int>>(p.size(),vector<int>(k+1,-1));

        return func(p,0,k);
    }
};
class Solution {
public:
    long long int jump(vector<int> &nums , int c, int d,vector<int> &dp)
    {       
            if(c==d) return 0;
            if(dp[c]!=-1)
                return dp[c];
            long long int t=INT_MAX;
     
            for(int i=1;i<=nums[c];i++)
            {   if(i+c>d) 
                    break;
                t=min(t,1+jump(nums,c+i,d,dp));  
            }
         return dp[c]=t;  
    }
    
    int jump(vector<int>& nums) {
         vector<int> dp(nums.size(),-1);
         return jump(nums,0,nums.size()-1,dp);
    }
};
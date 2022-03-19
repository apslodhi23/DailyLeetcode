class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,1);
        int a=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j] and ans[i]<=ans[j]){
                    ans[i]=ans[j]+1;
                }
            }
            a=max(a,ans[i]);
        }
        return a;
    }
};
class Solution {
public:
    int fun(vector<int>&nums,int i,int tar,int s){
        if(i==nums.size()){
            if(s==tar){
                return 1;
            }
            return 0;
        }
        return fun(nums,i+1,tar,s+nums[i])+fun(nums,i+1,tar,s-nums[i]);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        return fun(nums,0,target,0);
    }
};
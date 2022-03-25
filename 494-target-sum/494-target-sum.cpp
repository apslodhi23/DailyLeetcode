// class Solution {
// public:
//     int fun(vector<int>&nums,int i,int tar,int s){
//         if(i==nums.size()){
//             if(s==tar){
//                 return 1;
//             }
//             return 0;
//         }
//         return fun(nums,i+1,tar,s+nums[i])+fun(nums,i+1,tar,s-nums[i]);
//     }
//     int findTargetSumWays(vector<int>& nums, int target) {
//         int n=nums.size();
//         return fun(nums,0,target,0);
//     }
// };



// memeozize

class Solution {
public:
    map<pair<int,int>,int>dp;
    int fun(int n,vector<int>& nums, int target){
        if(n==0){
            if(target==0){
                return 1;
            }
            return 0;
        }
        if(dp.find({n,target})!=dp.end()){
            return dp[{n,target}];
        }
        return dp[{n,target}]=fun(n-1,nums,target+nums[n-1])+fun(n-1,nums,target-nums[n-1]);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        dp.clear();
        return fun(nums.size(),nums,target);
    }
};
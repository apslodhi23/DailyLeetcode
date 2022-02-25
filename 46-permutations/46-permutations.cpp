class Solution {
public:
    vector<vector<int>>ans;
    void fun(vector<int>nums,int i){
        if(i==nums.size()){
            ans.push_back(nums);
            return;
        }
        // ans.push_back(nums);
        for(int j=i;j<nums.size();j++){
            swap(nums[j],nums[i]);
            fun(nums,i+1);
            swap(nums[j],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        fun(nums,0);
        return ans;
    }
};
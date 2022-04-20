class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        while(l+1<r){
            int m=l+(r-l)/2;
            if(nums[m]>nums[r]){
                l++;
            }else{
                r--;
            }
        }
        return min(nums[l],nums[r]);
    }
};
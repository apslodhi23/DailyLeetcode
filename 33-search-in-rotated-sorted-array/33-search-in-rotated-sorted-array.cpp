class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        while(l<=r){
            int m=(l+r)>>1;
            if(nums[m]==target){
                return m;
            }
            // if(nums[m]==nums[l] and nums[r]==nums[m]){
            //     l++;
            //     r--;
            // }
            else if(nums[l]<=nums[m]){
                if(nums[l]<=target and nums[m]>target){
                    r=m-1;
                }else{
                    l=m+1;
                }
            }else if(nums[r]>=nums[m]){
                if(nums[r]>=target and nums[m]<target){
                    l=m+1;
                }else{
                    r=m-1; 
                }
            }
        }
        return -1;
    }
};
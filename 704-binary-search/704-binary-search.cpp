class Solution {
public:
    int fun(vector<int>nums,int i,int j,int t){
        while(i<=j){
            int m=i+(j-i)/2;
            if(nums[m]==t){
                return m;
            }
            else if(nums[m]>t){
                j=m-1;
            }else{
                i=m+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        return fun(nums,0,nums.size()-1,target);
    }
};
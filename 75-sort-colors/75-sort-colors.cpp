class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,j=nums.size()-1,m=0;
        while(m<=j){
            if(nums[m]==0){
                swap(nums[i],nums[m]);
                i++;
                m++;
            }else if(nums[m]==1){
                m++;
            }else{
                swap(nums[j],nums[m]);
                j--;
            }
        }
    }
};
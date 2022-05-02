class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0;
        int j=0;
        int k=nums.size()-1;
        while(j<=k){
            if(nums[j]%2==0){
                nums[i]=nums[j];
                i++;
                j++;
            }else{
                swap(nums[k],nums[j]);
                k--;
            }
            
        }
        return nums;
    }
};
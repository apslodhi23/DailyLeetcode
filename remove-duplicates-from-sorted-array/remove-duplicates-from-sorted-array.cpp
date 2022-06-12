// optimised approch
// Time:- O(n)
// space:- O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1;
        int j=1;
        while(j<nums.size()){
            if(nums[j]==nums[i-1]){
                j++;
            }else{
                nums[i]=nums[j];
                i++;
                j++;
            }
        }
        return i;
    }
};
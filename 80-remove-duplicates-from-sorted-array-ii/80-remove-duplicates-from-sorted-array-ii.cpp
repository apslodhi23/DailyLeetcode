class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=1,j=1,c=1;
        while(i<n){
            if(nums[i]==nums[i-1]){
                if(c==2){
                    i++;
                    continue;
                }else{
                    nums[j]=nums[i];
                    j++;
                    c++;
                }
            }else{
                nums[j]=nums[i];
                j++;
                c=1;
            }
            i++;
        }
        return j;
    }
};
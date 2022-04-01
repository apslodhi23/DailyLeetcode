class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i=0,j=1;
        vector<int>ans(nums.size());
        int k=0;
        int n=nums.size();
        while(k<n){
            if(nums[k]>0){
                ans[i]=nums[k];
                i+=2;
            }else{
                ans[j]=nums[k];
                j+=2;
            }
            k++;
        }
        return ans;
    }
};
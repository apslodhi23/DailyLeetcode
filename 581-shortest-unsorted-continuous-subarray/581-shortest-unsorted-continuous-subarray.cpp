class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>v=nums;
        sort(v.begin(),v.end());
        int i=0;
        while(i<nums.size()){
            if(v[i]!=nums[i]){
                break;
            }
            i++;
        }
        if(i>=nums.size()){
            return 0;
        }
        int j=nums.size()-1;
        while(j>=0){
            if(v[j]!=nums[j]){
                break;
            }
            j--;
        }
        return (j-i)+1;
    }
};
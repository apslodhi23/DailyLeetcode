class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=1;
        int num=nums[0];
        int i=1;
        int n=nums.size();
        while(i<n){
            if(nums[i]!=num){
                if(c==0){
                    c=1;
                    num=nums[i];
                }else{
                    c--;
                }
            }else{
                c++;
            }
            i++;
        }
        return num;
    }
};
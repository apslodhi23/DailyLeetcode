//optimised approch
//time: O(n);
// space : O(1)


class Solution {
public:
    bool canJump(vector<int>& nums) {
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            ans--;
            if(ans<0){
                return false;
            }
            ans=max(ans,nums[i]);
        }
        return true;;
    }
};
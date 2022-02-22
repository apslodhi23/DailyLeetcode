class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0;
        int j=0;
        while(j<nums.size() and nums[j]<0){
            j++;
        }
        if(j==nums.size()){
            reverse(nums.begin(),nums.end());
            for(auto &x:nums){
                x=(x*x);
            }
            return nums;
        }
        if(j==0){
             for(auto &x:nums){
                x=(x*x);
            }
            return nums;
        }
        else{
            vector<int>ans;
            i=j-1;
            while(i>=0 and j<nums.size()){
                int c1=nums[i]*nums[i];
                int c2=nums[j]*nums[j];
                if(c1<c2){
                    ans.push_back(c1);
                    i--;
                }else{
                    ans.push_back(c2);
                    j++;
                }
            }
            while(i>=0){
                ans.push_back(nums[i]*nums[i]);
                i--;
            }
            while(j<nums.size()){
                ans.push_back(nums[j]*nums[j]);
                j++;
            }
            return ans;
            
        }
        return {};
    }
};
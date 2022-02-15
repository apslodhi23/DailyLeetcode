class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int,int>m;
        for(auto x:nums){
            m[x]++;
        }
        for(int i=1;i<101;i++){
            m[i]+=m[i-1];
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                ans.push_back(0);
            }else{
                ans.push_back(m[nums[i]-1]);
            }
        }
        return ans;
    }
};
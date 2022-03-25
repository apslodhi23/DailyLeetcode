class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=nums[n-1]-nums[0];
        int mn=nums[0]+k,mx=nums[n-1]-k;
        for(int i=0;i<n-1;i++){
            int mmn=min(mn,nums[i+1]-k);
            int mmx=max(mx,nums[i]+k);
            ans=min(ans,mmx-mmn);
        }
        return ans;
    }
};
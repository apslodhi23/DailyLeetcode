class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n%2==0){
            int ans=0;
            int k=n/2;
            int k1=k-1;
            int s=0;
            for(auto x:nums){
                s+=(abs(nums[k]-x));
            }
            ans=s;
            s=0;
            for(auto x:nums){
                s+=(abs(nums[k1]-x));
            }
            return min(ans,s);
        }
        int ans=0;
            int k=n/2;
            int k1=k-1;
            int s=0;
            for(auto x:nums){
                s+=(abs(nums[k]-x));
            }
        return s;
    }
};
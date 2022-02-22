class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int n=nums.size();
        if(n<3){
            return {};
        }
        int i=0;
        while(i<n-2){
            while(i!=0 and i<n-2 and nums[i-1]==nums[i] ){
                i++;
            }
            int j=i+1,k=n-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    int c=nums[j];
                    while(j<k and nums[j]==c){
                        j++;
                    }
                    c=nums[k];
                    while(j<k and nums[k]==c){
                        k--;
                    }
                }else if(nums[i]+nums[j]+nums[k]<0){
                    j++;
                }else{
                    k--;
                }
            }
            i++;
        }
        
        return ans;
    }
};
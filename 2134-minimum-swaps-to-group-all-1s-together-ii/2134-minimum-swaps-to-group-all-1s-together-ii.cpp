class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int c=0;
        int n=nums.size();
        
        for(auto x:nums){
            if(x==1){
                c++;
            }
        }
        int ans=INT_MAX;
        int cc=0;
        for(int i=0;i<c;i++){
            if(nums[i]==1){
                cc++;
            }
        }
        ans=min(ans,c-cc);
        int j=0;
        int i=c;
        while(j<n){
            if(nums[i%n]==1){
                cc++;
            }
            if(nums[j]==1){
                cc--;
            }
            ans=min(ans,c-cc);
            i++;
            j++;
        }
        return ans;
    }
};
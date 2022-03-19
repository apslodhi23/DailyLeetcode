class Solution {
public:
    int sum(vector<int>&nums,int m){
        int s=0;
        for(auto x:nums){
            int c=x/m;
            if(x%m!=0){
                c++;
            }
            s+=c;
        }
        return s;
    }
    int smallestDivisor(vector<int>& nums, int t) {
        int l=1,h=*max_element(nums.begin(),nums.end());
        int ans=INT_MAX;
        while(l<=h){
            int m=l+(h-l)/2;
            if(sum(nums,m)<=t){
                ans=min(ans,m);
                h=m-1;
            }else{
                l=m+1;
            }
        }
        return ans;
    }
};
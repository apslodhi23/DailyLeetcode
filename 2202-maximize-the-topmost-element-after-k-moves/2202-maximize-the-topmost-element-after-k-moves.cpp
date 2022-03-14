class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1){
            if(k%2==0){
                return nums[0];
            }else{
                return -1;
            }
        }
        if(k==0){
            if(n==0){
                return -1;
            }else{
                return nums[0];
            }
        }
        if(k==1){
            if(n<2){
                return -1;
            }else{
                return nums[1];
            }
        }
        if(k<n){
            int maxx=0;
            for(int i=0;i<k-1;i++){
                maxx=max(maxx,nums[i]);
            }
            return max(maxx,nums[k]);
        }
        if(k==n){
            int maxx=0;
            for(int i=0;i<n-1;i++){
                maxx=max(maxx,nums[i]);
            }
            return maxx;
        }
        if(k>n){
            return *max_element(nums.begin(),nums.end());
        }
        return -1;
    }
};
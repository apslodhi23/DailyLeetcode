class Solution {
public:
    int merge(int l,int m,int r,vector<int>& nums){
        int i=l;
        int j=m+1;
        vector<int>v;
        int s=0;
          while(i <= m && j <= r)
        {
            if((long long)nums[i] >(long long) 2*nums[j])    // used ll to avoid overflow error
            {
                s += m- i + 1  ;
                j++ ;
            }else 
            {
                i++ ;
            }
        }
        sort(nums.begin()+l,nums.begin() + r + 1) ;
    return s;
    }
    int fun(int l,int r,vector<int>& nums){
        int s=0;
        if(l<r){
            int mid=l+(r-l)/2;
            s+=fun(l,mid,nums);
            s+=fun(mid+1,r,nums);
            s+=merge(l,mid,r,nums);
        }
        return s;
    }
    int reversePairs(vector<int>& nums) {
        return fun(0,nums.size()-1,nums);
    }
};
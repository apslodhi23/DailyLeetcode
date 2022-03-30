class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int t) {
        int l=0,s=0,h=0;
        for(auto x:nums){
            if(x<t){
                l++;
            }else if(x==t){
                s++;
            }
        }
        h=s+l;
        s=l;
        l=0;
        vector<int>v(nums.size());
        for(auto x:nums){
            if(x<t){
                v[l]=x;
                l++;
            }else if(x==t){
                v[s]=x;
                s++;
            }else{
                v[h]=x;
                h++;
            }
        }
        return v;
    }
};
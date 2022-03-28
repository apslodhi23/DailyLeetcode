class Solution {
public:
    map<vector<int>,int>m;
    int fun(int x,vector<int>&nums,vector<int>v){
        if(x>=nums.size()){
            return 0;
        }
        if(m.find(v)!=m.end()){
            return m[v];
        }
        int ans=0;
        for(int i=0;i<v.size();i++){
            if(v[i]<2){
                v[i]++;
                ans=max(ans,( (nums[x]&(i+1)) +fun(x+1,nums,v)));
                v[i]--;
            }
        }
        return m[v]=ans;
    }
    int maximumANDSum(vector<int>& nums, int n) {
        // int n=nums.szie();
        vector<int>v(n);
        return fun(0,nums,v);
        
        
    }
};
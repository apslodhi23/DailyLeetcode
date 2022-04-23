class Solution {
public:
    vector<vector<int>>ans;
    void fun(vector<int>&arr,int i,vector<int>v){
        if(i==arr.size()){
            ans.push_back(v);
            return;
        }
        fun(arr,i+1,v);
        v.push_back(arr[i]);
        fun(arr,i+1,v);
        v.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        ans.clear();
        fun(nums,0,{});
        return ans;
    }
};
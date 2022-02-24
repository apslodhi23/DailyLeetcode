class Solution {
public:
    void fun(vector<int>&arr,int s,vector<vector<int>>&ans,vector<int>v,int i){
        if(s==0){
            ans.push_back(v);
            return;
        }
        if(i==arr.size()){
            return;
        }
        fun(arr,s,ans,v,i+1);
        if(arr[i]<=s){
            v.push_back(arr[i]);
            fun(arr,s-arr[i],ans,v,i);
        }
        return ;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        fun(candidates,target,ans,v,0);
        return ans;
    }
};
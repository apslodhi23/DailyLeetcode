class Solution {
public:
    vector<vector<int>>ans;
    void fun(vector<int>&arr,int s,int i,vector<int>v){
        if(s==0){
            ans.push_back(v);
            return;
        }
        if(i==arr.size()){
            return;
        }
        if(arr[i]<=s){
            v.push_back(arr[i]);
            fun(arr,s-arr[i],i+1,v);
            v.pop_back();
        }
        while(i<arr.size()-1 and arr[i+1]==arr[i]){
            i++;
        }
        fun(arr,s,i+1,v);
        return ;
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        vector<int>v;
        sort(arr.begin(),arr.end());
        fun(arr,target,0,v);
        return ans;
    }
};
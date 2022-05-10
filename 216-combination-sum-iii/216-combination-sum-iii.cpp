class Solution {
public:
    vector<vector<int>>ans;
    void fun(vector<int>v,int k,int n,int i){
        if(i>10){
            return;
        }
        if(k==0){
            if(n==0){
                ans.push_back(v);
            }
            return;
        }
        fun(v,k,n,i+1);
        v.push_back(i);
        fun(v,k-1,n-i,i+1);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        fun({},k,n,1);
        return ans;
    }
};
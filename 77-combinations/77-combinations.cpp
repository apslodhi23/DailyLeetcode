class Solution {
public:
    vector<vector<int>>ans;
    void fun(vector<int>v,int i,int n,int k){
        if(v.size()==k){
            ans.push_back(v);
            return ;
        }
        for(int j=i;j<=n;j++){
            v.push_back(j);
            fun(v,j+1,n,k);
            v.pop_back();
        }
        return ;
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>v;
        fun(v,1,n,k);
        return ans;
    }
};
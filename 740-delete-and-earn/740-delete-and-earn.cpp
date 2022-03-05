class Solution {
public:
    int mat[10001];
    int fun(vector<pair<int,int>>v,int i,int n){
        if(i>=n){
            return 0;
        }
        if(mat[i]!=-1){
            return mat[i];
        }
        if(i==n-1){
            return mat[i] = v[i].first*v[i].second;
        }
        if(v[i].first+1!=v[i+1].first){
            return mat[i] =v[i].first*v[i].second+fun(v,i+1,n);
        }
        int x=v[i].first*v[i].second+fun(v,i+2,n);
        int u=fun(v,i+1,n);
        return mat[i]=max(x,u);
    }
    int deleteAndEarn(vector<int>& nums) {
        vector<pair<int,int>>v;
        map<int,int>m;
        memset(mat,-1,sizeof(mat));
        for(auto x:nums){
            m[x]++;
        }
        for(auto x:m){
            v.push_back({x.first,x.second});
        }
        return fun(v,0,v.size());
    }
};
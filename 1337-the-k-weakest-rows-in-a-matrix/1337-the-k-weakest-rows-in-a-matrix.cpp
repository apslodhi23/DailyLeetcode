class Solution {
public:
    bool static cmp(pair<int,int>a,pair<int,int>b){
        if(a.first!=b.first){
            return a.first<b.first;
        }
        return a.second<b.second;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>v;
        for(int i=0;i<mat.size();i++){
            int s=0;
            for(auto x:mat[i]){
                s+=x;
            }
            v.push_back({s,i});
        }
        sort(v.begin(),v.end(),cmp);
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};
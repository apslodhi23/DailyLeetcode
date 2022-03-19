class Solution {
public:
    bool static cmp(pair<int,int>a,pair<int,int>b){
        if(a.first!=b.first){
            return a.first<b.first;
        }
        return a.second<b.second;
    }
    vector<vector<int>> groupThePeople(vector<int>& arr) {
        vector<pair<int,int>>v;
        for(int i=0;i<arr.size();i++){
            v.push_back({arr[i],i});
        }
        sort(v.begin(),v.end(),cmp);
        vector<vector<int>>ans;
        int i=0;
        int n=arr.size();
        while(i<n){
            int k=v[i].first;
            vector<int>vv;
            while(k--){
                vv.push_back(v[i].second);
                i++;
            }
            ans.push_back(vv);
        }
        return ans;
    }
};
class Solution {
public:
    int earliestFullBloom(vector<int>& arr, vector<int>& brr) {
        vector<pair<int,int>>v;
        for(int i=0;i<arr.size();i++){
            v.push_back({brr[i],arr[i]});
        }
        sort(v.rbegin(),v.rend());
        int ans=0;
        int k=0;
        for(int i=0;i<arr.size();i++){
            k+=v[i].second;
            ans=max(ans,k+v[i].first);
        }
        return ans;
    }
};
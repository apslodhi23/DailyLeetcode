class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        long long ans=LONG_MAX;
        long long s=0;
        int n=beans.size();
        for(auto x:beans){
            s+=x;
        }
        sort(beans.begin(),beans.end());
        for(int i=0;i<n;i++){
            long long kk=(long long)(n-i);
            kk*=(long long)beans[i];
            ans=min(ans,s-kk);
        }
        return ans;
    }
};
class Solution {
public:
    int longestSubsequence(vector<int>& arr, int d) {
        map<int,int>m;
        int ans=0;
        int n=arr.size();
        for(auto x:arr){
            m[x]=1+m[x-d];
            ans=max(ans,m[x]);
        }
        return ans;
    }
};
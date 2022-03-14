class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n=pref.size();
        int ans=0;
        for(auto x:words){
            string k=x.substr(0,n);
            if(k==pref){
                ans++;
            }
        }
        return ans;
    }
};
class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>m;
        for(auto x:s){
            m[x]++;
        }
        for(auto x:t){
            m[x]--;
        }
        int ans=0;
        for(auto x:m){
            ans+=abs(x.second);
        }
        return ans;
    }
};
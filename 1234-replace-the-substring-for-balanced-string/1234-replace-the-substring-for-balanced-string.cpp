class Solution {
public:
    int balancedString(string s) {
        map<char,int>m;
        int n=s.length();
        for(auto x:s){
            m[x]++;
        }
        int ans=n;
        int i=0;
        int k=n/4;
        for(int j=0;j<n;j++){
            m[s[j]]--;
            while(i<n and m['Q']<=k and m['W']<=k and m['E']<=k and m['R']<=k){
                ans=min(ans,j-i+1);
                m[s[i]]++;
                i++;
            }
        }
        return ans;
    }
};
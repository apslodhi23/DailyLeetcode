class Solution {
public:
    long long appealSum(string s) {
        long long sum=0;
        long long ans=0;
        int prev[26]={};
        for(int i=0;i<s.length();i++){
            sum+=i+1-prev[s[i]-'a'];
            prev[s[i]-'a']=i+1;
            ans+=sum;
        }
        return ans;
    }
};
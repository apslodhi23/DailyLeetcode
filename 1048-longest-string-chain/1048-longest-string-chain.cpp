class Solution {
public:
    bool static cmp(string s,string k){
        return s.length()<k.length();
    }
    bool fun(string s,string k){
        string ss=s.substr(1);
        if(ss==k){
            return true;
        }
        ss=s.substr(0,s.length()-1);
        if(ss==k){
            return true;
        }
        for(int i=1;i<s.length()-1;i++){
            string ss=s.substr(0,i);
            ss+=s.substr(i+1);
            if(ss==k){
                return true;
            }
        }
        return false;
    }
    int longestStrChain(vector<string>& words) {
        sort(words.begin(),words.end(),cmp);
        int ans=1;
        int n=words.size();
        
        vector<int>dp(n,1);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(words[j].size()+1==words[i].size() and fun(words[i],words[j])==true and dp[i]<=dp[j]){
                    dp[i]=dp[j]+1;
                }
            }
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};
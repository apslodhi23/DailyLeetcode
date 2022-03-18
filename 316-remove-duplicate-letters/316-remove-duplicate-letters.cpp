class Solution {
public:
    string removeDuplicateLetters(string s) {
        map<char,int>m;
        map<char,int>vis;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        string ans="";
        for(auto x:s){
            m[x]--;
            if(vis[x]==true){
                continue;
            }
            while(ans.empty()==false and x<ans.back() and m[ans.back()]>0){
                vis[ans.back()]=false;
                ans.pop_back();
            }
            ans+=x;
            vis[x]=true;
        }
        return ans;
    }
};
class Solution {
public:
    string minWindow(string s, string t) {
        int m=t.size();
        int n=s.size();
        if(n<m){
            return "";
        }
        unordered_map<char,int>m1;
        for(auto x:t){
            m1[x]++;
        }
        int ss=0;
        int ans=INT_MAX;
        int i=0,j=0;
        int c=m1.size();
        while(i<n){
            if(m1.find(s[i])!=m1.end()){
                m1[s[i]]--;
                if(m1[s[i]]==0){
                    c--;
                }
            }
            while(c==0){
                if(ans>i-j+1){
                    ans=i-j+1;
                    ss=j;
                }
                if(m1.find(s[j])!=m1.end()){
                    m1[s[j]]++;
                    if(m1[s[j]]>0){
                        c++;
                    }
                }
                j++;
            }
            i++;
        }
        if(ans==INT_MAX){
            return "";
        }
        return s.substr(ss,ans);
    }
};
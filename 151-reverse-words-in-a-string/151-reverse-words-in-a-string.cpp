class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int i=s.length()-1;
        while(i>=0 and s[i]==' '){
            i--;
        }
        string k="";
        while(i>=0){
            if(s[i]==' '){
                if(k.length()>0){
                    reverse(k.begin(),k.end());
                    ans+=k;
                    ans+=" ";
                    k="";
                }
            }else{
                    if(s[i]!=' '){
                        k+=s[i];
                    }
                }
                i--;
        }
        if(k.length()>0){
            reverse(k.begin(),k.end());
            ans+=k;
        }
        if(ans[ans.length()-1]==' '){
            ans.pop_back();
        }
        return ans;
    }
};
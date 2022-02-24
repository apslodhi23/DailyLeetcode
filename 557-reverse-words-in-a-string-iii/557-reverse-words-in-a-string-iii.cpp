class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string k="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                reverse(k.begin(),k.end());
                ans+=k;
                k="";
                ans+=" ";
            }else{
                k+=s[i];
            }
        }
        if(k.length()>0){
            // ans+=" ";
            reverse(k.begin(),k.end());
            ans+=k;
        }
        return ans;
    }
};
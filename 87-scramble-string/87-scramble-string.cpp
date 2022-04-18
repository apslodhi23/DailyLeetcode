class Solution {
public:
    map<pair<string,string>,bool>m;
    bool fun(string s1,string s2){
        if(s1.length()!=s2.length()){
            return false;
        }
       if(s1==s2){
           return true;
       }
        if(s1.length()==1){
            return s1==s2;
        }
        if(m.find({s1,s2})!=m.end()){
            return m[{s1,s2}];
        }
        bool ans=false;
        int n=s1.length();
        for(int i=1;i<s1.length();i++){
            bool b1=fun(s1.substr(0,i) ,s2.substr(0,i)) and fun(s1.substr(i) ,s2.substr(i));
            if(b1==true){
                return true;
            }
             bool b2=fun(s1.substr(0,i) ,s2.substr(n-i)) and fun(s1.substr(i) ,s2.substr(0,n-i));
            if(b2==true){
                return true;
            }
        }
        return m[{s1,s2}]=ans;
    }
    bool isScramble(string s1, string s2) {
        m.clear();
        return fun(s1,s2);
    }
};
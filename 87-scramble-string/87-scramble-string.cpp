class Solution {
public:map<pair<string,string>,bool>mm;
    bool fun(string s1,string s2){
        int n=s1.length();
        int m=s2.length();
        if(n!=m){
            return false;
        }
        if(n==0){
            return true;
        }
        if(s1==s2){
            return true;
        }
         if(mm.find({s1,s2})!=mm.end()){
            return mm[{s1,s2}];
        }
        for(int i=0;i<n-1;i++){
            if(fun(s1.substr(0,i+1),s2.substr(n-i-1)) && fun(s1.substr(i+1),s2.substr(0,n-i-1))){
                return true;
            }
            if(fun(s1.substr(0,i+1),s2.substr(0,i+1)) && fun(s1.substr(i+1),s2.substr(i+1))){
                return true;
            }
        }
        return  mm[{s1,s2}]=false;
    }
    bool isScramble(string s1, string s2) {
        return fun(s1,s2);
    }
};
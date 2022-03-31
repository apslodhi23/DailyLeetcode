class Solution {
public:
    
    int ans=0;
    
    void fun(int n,char c){
        if(n==0){
            ans++;
            return;
        }
        string s="aeiou";
        for(auto x:s){
            if(c<=x){
                fun(n-1,x);
            }
        }
    }
    int countVowelStrings(int n) {
        fun(n,' ');
        return ans;
    }
};
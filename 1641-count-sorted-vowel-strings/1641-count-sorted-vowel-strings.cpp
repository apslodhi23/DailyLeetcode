class Solution {
public:
    void fun(int n,char c,int &ans){
        if(n==0){
            ans++;
            return;
        }
        string s="aeiou";
        for(auto x:s){
            if(c<=x){
                fun(n-1,x,ans);
            }
        }
    }
    int countVowelStrings(int n) {
        int ans=0;
        fun(n,' ',ans);
        return ans;
    }
};
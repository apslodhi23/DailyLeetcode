class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>m;
        for(auto x:s){
            m[x]++;
        }
        int ans=0;
        int c=0;
        for(auto x:m){
            if(x.second%2==1){
                c++;
                ans+=(x.second-1);
            }else{
                ans+=x.second;
            }
            
        }
        return (c==0)?ans:ans+1;
    }
};
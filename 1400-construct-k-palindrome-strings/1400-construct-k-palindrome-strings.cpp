class Solution {
public:
    bool canConstruct(string s, int k) {
        unordered_map<char,int>m;
        for(auto x:s){
            m[x]++;
        }
        int c=0;
        if(s.length()<k){
            return false;
        }
        for(auto x:m){
            if(x.second%2==1){
                c++;
            }
        }
        if(c>k){
            return false;
        }
        return true;
    }
};
class Solution {
public:
    bool  fun(string s,unordered_map<char,int>m){
        for(int i=0;i<s.length();i++){
            if(m[s[i]]<=0){
                return false;
            }
            m[s[i]]--;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        if(m<n){
            return false;
        }
        unordered_map<char,int>ma;
        for(int i=0;i<n;i++)
            ma[s2[i]]++;
        if(fun(s1,ma)==true){
            return true;
        }
        for(int i=n;i<m;i++){
            ma[s2[i-n]]--;
            ma[s2[i]]++;
            if(fun(s1,ma)==true){
                return true;
            }
        }
        return false;
            
    }
};
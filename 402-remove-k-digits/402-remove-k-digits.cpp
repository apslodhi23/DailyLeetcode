class Solution {
public:
    string removeKdigits(string s, int k) {
        int n=s.length();
        if(n==k){
            return "0";
        }
        if(k==0){
            return s;
        }
        string ans="";
        for(auto x:s){
            while(ans.length()!=0 and ans[ans.length()-1]>x and k!=0){
                ans.pop_back();
                k--;
            }
            if(ans.length()!=0 or x!='0'){
                ans.push_back(x);
            }
        }
        while(ans.length()!=0 and k--){
            ans.pop_back();
        }
        if(ans.length()==0){
            return "0";
        }
        return ans;
    }
};
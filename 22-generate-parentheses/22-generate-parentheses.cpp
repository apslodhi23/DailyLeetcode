class Solution {
public:
    vector<string>ans;
    void fun(int open,int close,string s){
        if(open ==0 and close ==0){
            ans.push_back(s);
        }
        if(open <0 or close<0){
            return;
        }
        if(open==close){
            fun(open-1,close,s+"(");
        }else{
            fun(open -1,close ,s+"(");
            fun(open,close-1,s+")");
        }
    }
    vector<string> generateParenthesis(int n) {
        int o=n,c=n;
        ans.clear();
        fun(o,c,"");
        return ans;
    }
};
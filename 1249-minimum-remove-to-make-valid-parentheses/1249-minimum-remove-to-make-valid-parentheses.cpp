class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans="";
        int o=-0;
        int c=0;
        stack<int>stk;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                // o++;
                stk.push(i);
            }
            if(s[i]==')'){
                if(stk.empty()==false){
                    stk.pop();
                }else{
                    s[i]='-';
                }
            }
        }
        while(stk.empty()==false){
            s[stk.top()]='-';
            stk.pop();
        }
        for(auto x:s){
            if(x!='-'){
                ans+=x;
            }
        }
        return ans;
    }
};
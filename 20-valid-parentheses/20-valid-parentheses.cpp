class Solution {
public:
    bool isValid(string s) {
        stack<char>ss;
        int i=0;
        while(i<s.length()){
            if(s[i]=='(' or s[i]=='{' or s[i]=='['){
                ss.push(s[i]);
            }else{
                if(s[i]==')'){
                    if(ss.empty()==true or ss.top()!='('){
                        return false;
                    }else{
                        ss.pop();
                    }
                }else if(s[i]==']'){
                    if(ss.empty()==true or ss.top()!='['){
                        return false;
                    }else{
                        ss.pop();
                    }
                }else{
                    if(ss.empty()==true or ss.top()!='{'){
                        return false;
                    }else{
                        ss.pop();
                    }
                }
            }
            i++;
        }
        if(ss.empty()==false){
            return false;
        }
        return true;
    }
};
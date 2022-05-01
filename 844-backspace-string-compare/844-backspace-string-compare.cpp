class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>c;
        for(auto x:s){
            if(x=='#'){
                if(c.empty()==false){
                    c.pop();
                }
            }else{
                c.push(x);
            }
        }
        string ss="";
        while(c.empty()==false){
            ss+=c.top();
            c.pop();
        }
         for(auto x:t){
            if(x=='#'){
                if(c.empty()==false){
                    c.pop();
                }
            }else{
                c.push(x);
            }
        }
        int i=0;
        if(c.size()!=ss.size()){
            return false;
        }
        while(c.empty()==false){
            if(ss[i]!=c.top()){
                return false;
            }
            i++;
            c.pop();
        }
        return true;
        
    }
};
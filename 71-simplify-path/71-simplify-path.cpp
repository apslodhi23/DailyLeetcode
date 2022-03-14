class Solution {
public:
    string simplifyPath(string path) {
        int n=path.size();
        if(path[n-1]!='/'){
            path+="/";
            n++;
        }
        stack<string>s;
        string temp="";
        int i=1;
        while(i<n){
            if(path[i]=='/'){
                if(temp=="" or temp=="."){
                    
                }else if(temp==".."){
                    if(s.empty()==false){
                        s.pop();
                    }
                }else{
                    s.push(temp);
                }
                temp="";
            }else{
                temp+=path[i];
            }
            i++;
        }
        stack<string>ss;
        while(!s.empty()){
            ss.push(s.top());
            s.pop();
        }
        string ans="/";
        if(ss.empty()==true){
            return ans;
        }
        while(!ss.empty()){
            ans+=ss.top()+"/";
            ss.pop();
        }
        // ans.pop_back();
        return ans.substr(0,ans.length()-1);
    }
};
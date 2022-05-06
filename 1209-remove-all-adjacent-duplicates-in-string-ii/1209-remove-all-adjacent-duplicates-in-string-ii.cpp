class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>stk;
        int i=0;
        while(i<s.length()){
            // cout<<1<<endl;
            if(stk.empty()==true){
                // cout<<11<<endl;
                stk.push({s[i],1});
            }else{
                auto x=stk.top();
                if(x.first==s[i]){
                    int ck=x.second+1;
                    if(ck==k){
                        stk.pop();
                    }else{
                        stk.pop();
                        stk.push({s[i],ck});
                    }
                }else{
                    stk.push({s[i],1});
                }
            }
            i++;
        }
        string ans="";
        while(stk.empty()==false){
            auto x=stk.top();
            stk.pop();
            while(x.second--){
                ans.push_back(x.first);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
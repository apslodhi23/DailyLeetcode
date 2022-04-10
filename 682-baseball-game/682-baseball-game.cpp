class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>s;
        for(auto x:ops){
            if(x=="C"){
                s.pop();
            }else if(x=="D"){
                s.push(s.top()*2);
            }else if(x=="+"){
                int t=s.top();
                s.pop();
                int k=s.top()+t;
                s.push(t);
                s.push(k);
            }else{
                int k=stoi(x);
                s.push(k);
            }
        }
        int ans=0;
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
        return ans;
    }
};
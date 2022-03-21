class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& p, string s) {
        sort(p.begin(),p.end());
        map<string,vector<string>>m;
        // for()
         vector<vector<string>>ans;
        for(int i=0;i<s.length();i++){
            string k=s.substr(0,i+1);
            int c=0;
            for(auto x:p){
                string z=x.substr(0,i+1);
                if(z==k){
                    m[k].push_back(x);
                    c++;
                }
                if(c==3){
                    break;
                }
            }
            ans.push_back(m[k]);
        }
        return ans;
      
    }
};
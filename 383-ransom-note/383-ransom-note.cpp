class Solution {
public:
    bool canConstruct(string e, string s) {
        unordered_map<char,int>m;
        for(auto x:s){
            m[x]++;
        }
        for(auto x:e){
            if(m.find(x)!=m.end()){
                m[x]--;
                if(m[x]==0){
                    m.erase(x);
                }
            }else{
                return false;
            }
        }
        return true;
    }
};
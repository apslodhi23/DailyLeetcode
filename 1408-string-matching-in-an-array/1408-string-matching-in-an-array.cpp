class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        set<string>s;
        for(int j=0;j<words.size();j++){
            for(int i=0;i<words.size();i++){
                if(j!=i){
                    size_t found = words[j].find(words[i]);
                    if (found != string::npos){
                    // if(.find()!=words[j].end()){
                        s.insert(words[i]);
                    }
                    
                    found = words[i].find(words[j]);
                    if (found != string::npos){
                    // if(.find()!=words[j].end()){
                        s.insert(words[j]);
                    }
                }
            }
        }
        vector<string>ans;
        for(auto x:s){
            ans.push_back(x);
        }
        return ans;
    }
};
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        
        string ans="";
        for(int i=0;i<strs[0].size();i++){
            if(strs[0][i]!=strs[strs.size()-1][i]){
                break;
            }
            ans+=strs[0][i];
        }
        return ans;
    }
};
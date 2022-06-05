class Solution {
public:
    
    bool static cmp(string &a,string &b){
        return a.length()<b.length();
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end(),cmp);// sorting according to length
        
        string ans=strs[0];
        for(int i=1;i<strs.size();i++){
            int c=0;
            for(int j=0;j<ans.size();j++){
                if(ans[j]!=strs[i][j]){
                    break;
                }
                c++;
            }
            ans=ans.substr(0,c);
        }
        return ans;
        
    }
};
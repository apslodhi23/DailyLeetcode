class Solution {
public:
    vector<string> cellsInRange(string s) {
        char c1=s[0];
        int x1=s[1]-'0';
        char c2=s[3];
        int x2=s[4]-'0';
        vector<string>ans;
        for(char c=c1;c<=c2;c++){
            for(int i=x1;i<=x2;i++){
                string ss="";
                ss.push_back(c);
                ss+=to_string(i);
                ans.push_back(ss);
            }
        }
        return ans;
    }
};
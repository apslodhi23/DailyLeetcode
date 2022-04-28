class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>m;
        for(int i=0;i<s.length();i++){
            m[s[i]]=i;
        }
        vector<int>ans;
        int ind=-1;
        int mx=0;
        for(int i=0;i<s.length();i++){
            mx=max(mx,m[s[i]]);
            if(i==mx){
                ans.push_back(mx-ind);
                ind=mx;
            }
        }
        return ans;
    }
};
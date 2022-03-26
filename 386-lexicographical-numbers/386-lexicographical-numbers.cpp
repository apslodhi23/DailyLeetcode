class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int>ans(n);
        vector<string>s;
        for(int i=1;i<=n;i++){
            s.push_back(to_string(i));
        }
        sort(s.begin(),s.end());
        for(int i=0;i<n;i++){
            ans[i]=stoi(s[i]);
        }
        return ans;
    }
};
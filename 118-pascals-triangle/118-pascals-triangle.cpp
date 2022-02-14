class Solution {
public:
    vector<vector<int>> generate(int n) {
        if(n==1){
            return {{1}};
        }
        if(n==2){
            vector<vector<int>>ans;
            ans.push_back({1});
            ans.push_back({1,1});
            return ans;
        }
        vector<vector<int>>ans;
        ans.push_back({1});
        ans.push_back({1,1});
        for(int i=2;i<n;i++){
            vector<int>v(i+1);
            v[0]=1;
            v[i]=1;
            for(int j=1;j<i;j++){
                v[j]=ans[i-1][j-1]+ans[i-1][j];
            }
            ans.push_back(v);
        }
        return ans;
    }
};
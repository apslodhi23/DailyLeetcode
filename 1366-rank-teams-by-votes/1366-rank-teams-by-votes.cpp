class Solution {
public:
    string rankTeams(vector<string>& votes) {
        string ans=votes[0];
        int n=votes[0].size();
        vector<vector<int>>v(26,vector<int>(n));
        for(auto x:votes){
            for(int i=0;i<n;i++){
                v[x[i]-'A'][i]++;
            }
        }
        sort(ans.begin(),ans.end(),[&](auto &x,auto &y){
            if(v[x-'A']==v[y-'A']){
                return x<y;
            }
            return v[x-'A']>v[y-'A'];
        });
        return ans;
    }
};
class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        vector<vector<int>>v(n,vector<int>(m,0));
        for(auto x:indices){
            for(int i=0;i<m;i++){
                v[x[0]][i]++;
            }
            for(int i=0;i<n;i++){
                v[i][x[1]]++;
            }
        }
        int ans=0;
        for(auto x:v){
            for(auto y:x){
                if(y%2==1){
                    ans++;
                }
            }
        }
        return ans;
    }
};
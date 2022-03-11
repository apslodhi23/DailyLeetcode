class Solution {
public:
    bool valid(int i,int j,int n,int m){
        if(i<0 or j<0 or i>=n or j>=m){
            return false;
        }
        return true;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int,int>>q;
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>ans(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    ans[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        while(!q.empty()){
            auto x=q.front();
            int a=x.first;
            int b=x.second;
            q.pop();
            for(int i=0;i<4;i++){
                int x=a+dx[i];
                int y=b+dy[i];
                if(valid(x,y,n,m) and ans[x][y]==-1){
                    ans[x][y]=ans[a][b]+1;
                    q.push({x,y});
                }
            }
        }
        return ans;
    }
};
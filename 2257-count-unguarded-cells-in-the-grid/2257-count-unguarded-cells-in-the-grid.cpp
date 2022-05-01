class Solution {
public:
    int countUnguarded(int n, int m, vector<vector<int>>& g, vector<vector<int>>& w) {
        vector<vector<int>>vis(n,vector<int>(m,0));
        int k=w.size();
        for(int i=0;i<k;i++){
            int x=w[i][0],y=w[i][1];
            vis[x][y]=-2;
        }
        k=g.size();
        for(int i=0;i<k;i++){
            int x=g[i][0],y=g[i][1];
            vis[x][y]=2;
        }
        for(int i=0;i<k;i++){
            int x=g[i][0],y=g[i][1];
            for(int j=x+1;j<n;j++){
                if(vis[j][y]==-2 or vis[j][y]==2){
                    break;
                }
                vis[j][y]=1;
            }
            for(int j=x-1;j>=0;j--){
                if(vis[j][y]==-2 or vis[j][y]==2){
                    break;
                }
                vis[j][y]=1;
            }
            for(int j=y+1;j<m;j++){
                if(vis[x][j]==-2 or vis[x][j]==2){
                    break;
                }
                vis[x][j]=1;
            }
            for(int j=y-1;j>=0;j--){
                if(vis[x][j]==-2 or vis[x][j]==2){
                    break;
                }
                vis[x][j]=1;
            }
        }
        int ans=0;
        for(auto x:vis){
            for(auto y:x){
                if(y==0){
                    ans++;
                }
            }
        }
        return ans;
    }
};
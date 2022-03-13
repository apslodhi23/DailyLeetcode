class Solution {
public:
    int dr[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
    void fun(int i,int j,int n,int m,vector<vector<int>>&arr){
        if(i<0 or j<0 or i>=n or j>=m or arr[i][j]==0 or arr[i][j]==2){
            return;
        }
        arr[i][j]=2;
        for(int k=0;k<4;k++){
            fun(i+dr[k][0],j+dr[k][1],n,m,arr);
        }
    }
    int shortestBridge(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        bool f=false;
        vector<vector<int>>dis(n,vector<int>(m,INT_MAX));
        queue<pair<int,int>>pq;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 and f==false){
                    fun(i,j,n,m,grid);
                    f=true;
                }else{
                    if(grid[i][j]==1){
                        dis[i][j]=0;
                        pq.push({i,j});
                    }
                }
            }
        }
        while(!pq.empty()){
            int i=pq.front().first;
            int j=pq.front().second;
            pq.pop();
            for(int k=0;k<4;k++){
                int x=i+dr[k][0];
                int y=j+dr[k][1];
                if(x>=0 and x<n and y>=0 and y<m and grid[x][y]!=1){
                    if(dis[i][j]+1<dis[x][y]){
                        dis[x][y]=1+dis[i][j];
                        pq.push({x,y});
                    }
                }
            }
        }
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    ans=min(ans,dis[i][j]);
                }
            }
        }
        return ans-1;
        
        
    }
};
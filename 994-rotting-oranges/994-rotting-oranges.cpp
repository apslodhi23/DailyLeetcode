class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!=0){
                    cnt++;
                }
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        int v=0;
        int ans=0;
        int tot=0;
        while(!q.empty()){
            int k=q.size();
            
            tot+=k;
            while(k--){
                int i=q.front().first;
                int j=q.front().second;
                q.pop();
                int x=i+1,y=j;
                if(x<0 or x>=n or y<0 or y>=m or grid[x][y]!=1){
                    v++;
                }else{
                    grid[x][y]=2;
                    q.push({x,y});
                }
                x=i;
                y=j-1;
                if(x<0 or x>=n or y<0 or y>=m or grid[x][y]!=1){
                    v++;
                }else{
                    grid[x][y]=2;
                    q.push({x,y});
                }
                x=i-1;
                y=j;
                if(x<0 or x>=n or y<0 or y>=m or grid[x][y]!=1){
                    v++;
                }else{
                    grid[x][y]=2;
                    q.push({x,y});
                }
                x=i;
                y=j+1;
                if(x<0 or x>=n or y<0 or y>=m or grid[x][y]!=1){
                    v++;
                }else{
                    grid[x][y]=2;
                    q.push({x,y});
                }
            }
            if(q.empty()==false){
                ans++;
            }
        }
        if(cnt!=tot){
            return -1;
        }
        return ans;
    }
};
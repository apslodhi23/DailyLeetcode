class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans=0;
        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,1,-1};
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    int kk=4;
                    for(int k=0;k<4;k++){
                        int x=i+dx[k];
                        int y=j+dy[k];
                        if(x<0 or y<0 or x>=n or y>=m){
                            continue;
                        }else{
                            if(grid[x][y]==1){
                                kk--;
                            }
                        }
                    }
                    ans+=kk;
                }
            }
        }
        return ans;
        
    }
};
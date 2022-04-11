class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
         vector<vector<int>>res;
          int m =grid.size();
          int n= grid[0].size();
        res=grid;
          while(k--)
          {
          for(int i=0;i<m;i++)
          {
              for(int j=0;j<n;j++)
              {
                  if(i==0&&j==0)
                       res[i][j]=grid[m-1][n-1];
                    else if(i!=0&&j==0)
                        res[i][j]=grid[i-1][n-1];
                   else
                       res[i][j]=grid[i][j-1];
              }
          }
              grid=res;
          }
        return res;
    }
};
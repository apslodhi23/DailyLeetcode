class Solution {
public:
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    bool fun(vector<vector<int>>&arr,int i,int j,int n,int m){
        if(i<0 or i>=n or j<0 or j>=m ){
            return false;
        }
        if(arr[i][j]==1){
            return true;
        }
        arr[i][j]=1;
        bool b1=fun(arr,i+1,j,n,m);
        bool b2=fun(arr,i,j+1,n,m);
        bool b3=fun(arr,i-1,j,n,m);
        bool b4=fun(arr,i,j-1,n,m);
        return b1&b2&b3&b4;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0){
                    if(fun(grid,i,j,n,m)==true){
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};
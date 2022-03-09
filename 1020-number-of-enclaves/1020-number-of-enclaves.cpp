class Solution {
public:
    void fun(vector<vector<int>>&arr,int i,int j,int n,int m){
        if(i<0 or i>=n or j<0 or j>=m or arr[i][j]==0){
            return ;
        }
        arr[i][j]=0;
        fun(arr,i+1,j,n,m);
        fun(arr,i-1,j,n,m);
        fun(arr,i,j+1,n,m);
        fun(arr,i,j-1,n,m);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int ans=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            if(grid[i][0]==1){
                fun(grid,i,0,n,m);
            }
            if(grid[i][m-1]){
                fun(grid,i,m-1,n,m);
            }
        }
        for(int i=0;i<m;i++){
            if(grid[0][i]==1){
                fun(grid,0,i,n,m);
            }
            if(grid[n-1][i]==1){
                fun(grid,n-1,i,n,m);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    // cout<<1<<endl;
                    // if(fun(grid,i,j,n,m)==false){
                        ans++;
                    // }
                }
            }
        }
        return ans;
    }
};
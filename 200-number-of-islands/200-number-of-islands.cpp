class Solution {
public:
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    void fun(vector<vector<char>>&arr,int i,int j,int n,int m){
        if(i<0 or i>=n or j<0 or j>=m or arr[i][j]!='1'){
            return;
        }
        arr[i][j]='-';
        for(int k=0;k<4;k++){
            fun(arr,i+dx[k],j+dy[k],n,m);
        }
        return;
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    ans++;
                    fun(grid,i,j,n,m);
                }
            }
        }
        return ans;
    }
};
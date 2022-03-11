class Solution {
public:
void dfs(vector<vector<int>>matrix,vector<vector<bool>>&visited,int i,int j){
       int m = matrix.size();
        int n = matrix[0].size();

        visited[i][j] = true;
        //up
        if (i-1 >= 0 && visited[i-1][j] != true && matrix[i-1][j]>=matrix[i][j])
            dfs(matrix, visited, i-1, j);
        //down
        if (i+1 < m && visited[i+1][j] != true && matrix[i+1][j]>=matrix[i][j])
            dfs(matrix, visited, i+1, j);
        //left
        if (j-1 >= 0 && visited[i][j-1] != true && matrix[i][j-1]>=matrix[i][j])
            dfs(matrix, visited, i, j-1);
        //right
        if (j+1 <n && visited[i][j+1] != true && matrix[i][j+1]>=matrix[i][j])
            dfs(matrix, visited, i, j+1);

    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& arr) {
        vector<vector<int>>ans;
        int n=arr.size();
        int m=arr[0].size();
        if(n==0 or m==0){
            return ans;
        }
        vector<vector<bool>>vi(n,vector<bool>(m,false));
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            dfs(arr,vi,i,0);
            dfs(arr,vis,i,m-1);
        }
        for(int i=0;i<m;i++){
            dfs(arr,vi,0,i);
            dfs(arr,vis,n-1,i);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vi[i][j]==true and vis[i][j]==true){
                    ans.push_back({i,j});
                }
            }
        }
        return ans;
    }
    
};
class Solution {
public:
    void dfs(vector<vector<char>>&arr,int i,int j,int n,int m){
        if(i<0 or j<0 or i>=n or j>=m or arr[i][j]!='O'){
            return;
        }
        arr[i][j]='-';
        dfs(arr,i+1,j,n,m);
        dfs(arr,i-1,j,n,m);
        dfs(arr,i,j+1,n,m);
        dfs(arr,i,j-1,n,m);
        return;
    }
    void solve(vector<vector<char>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        if(n==0){
            return;
        }
        for(int i=0;i<n;i++){
            if(arr[i][0]=='O'){
                dfs(arr,i,0,n,m);
            }
            if(arr[i][m-1]=='O'){
                dfs(arr,i,m-1,n,m);
            }
        }
        for(int i=0;i<m;i++){
            if(arr[0][i]=='O'){
                dfs(arr,0,i,n,m);
            }
            if(arr[n-1][i]=='O'){
                dfs(arr,n-1,i,n,m);
            }
        }
        // for(auto x:arr){
        //     for(auto y:x){
        //         cout<<y<<" ";
        //     }
        //     cout<<endl;
        // }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]=='O'){
                    arr[i][j]='X';
                }
                if(arr[i][j]=='-'){
                    arr[i][j]='O';
                }
                // if(i==n-1 and j==1){
                //     cout<<1<<endl;
                // }
            }
            
        }
        return;
    }
};
class Solution {
public:
    int ans=0;
    bool safe(int row,int col,vector<vector<int>>&b,int n){
    for(int i=0;i<col;i++){
        if(b[row][i]==1){
            return false;
        }
    }
    int i=row ,j=col;
    while(i>=0 and j>=0){
        if(b[i][j]==1){
            return false;
        }
        i--;
        j--;
    }
     i=row,j=col;
    while(i<n and j>=0){
        if(b[i][j]==1){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
    bool fun(vector<vector<int>>&arr,int c,int n){
        if(c==n){
            ans++;
            return true;
        }
         for(int i=0;i<n;i++){
            if(safe(i,c,arr,n)==true){
                arr[i][c]=1;
                fun(arr,c+1,n);
                arr[i][c]=0;
            }
        }
        return false;
    }
    int totalNQueens(int n) {
        vector<vector<int>>arr(n,vector<int>(n,0));
        fun(arr,0,n);
        return ans;
    }
};
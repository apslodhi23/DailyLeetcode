class Solution {
public:
    int dx[8]={1,-1,0,0,1,-1,-1,1};
    int dy[8]={0,0,1,-1,1,-1,1,-1};
    int fun(vector<vector<int>>&arr,int i,int j,int n,int m){
        int c=0;
        for(int k=0;k<8;k++){
            int x=i+dx[k];
            int y=j+dy[k];
            if(x<0 or x>=n or y<0 or y>=m){
                continue;
            }
            if(arr[x][y]==1){
                c++;
            }
        }
        return c;
    }
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>>arr;
        arr=board;
        int n=arr.size();
        int m=arr[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int c=fun(arr,i,j,n,m);
                if(arr[i][j]==1){
                    if(c<2 or c>3){
                        board[i][j]=0;
                    }else{
                        board[i][j]=1;
                    }
                }else{
                    if(c==3){
                        board[i][j]=1;
                    }else{
                        board[i][j]=0;
                    }
                }
            }
        }
    }
};
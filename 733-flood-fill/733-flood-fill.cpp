class Solution {
public:
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    void fun(vector<vector<int>>&arr,int i, int j,int n,int m,int col,int new_col){
        if(i<0 or i>=n or j<0 or j>=m or arr[i][j]!=col or arr[i][j]==new_col){
            return ;
        }
        arr[i][j]=new_col;
        for(int k=0;k<4;k++){
            fun(arr,i+dx[k],j+dy[k],n,m,col,new_col);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        fun(image,sr,sc,image.size(),image[0].size(),image[sr][sc],newColor);
        return image;
    }
};
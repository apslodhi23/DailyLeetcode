//optimised soltuion
//time: O(n*m);
// space: O(1);



//0 dead to dead
//1 live to live
//2 live to dead
//3 daed to live

class Solution {
public:
    int dx[8]={1,-1,0,0,1,-1,-1,1};
    int dy[8]={0,0,1,-1,1,-1,1,-1};
    void gameOfLife(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int c=0;
                for(int k=0;k<8;k++){
                    int x=i+dx[k];
                    int y=j+dy[k];
                    if(x<0 or x>=n or y<0 or y>=m){
                        continue;
                    }
                    if(arr[x][y]==1 or arr[x][y]==2){
                        c++;
                    }
                }
                if(arr[i][j]==1 and (c<2 or c>3)){
                    arr[i][j]=2;
                }
                else if(arr[i][j]==0 and c==3){
                    arr[i][j]=3;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr[i][j]=arr[i][j]%2;
            }
        }
    }
};
class Solution {
public:
    int dx[8]={1,-1,0,0,1,-1,-1,1};
    int dy[8]={0,0,1,-1,1,-1,1,-1};
    int shortestPathBinaryMatrix(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        queue<pair<int,int>>pq;
        pq.push({0,0});
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        vis[0][0]=true;
        int ans=0;
        if(arr[0][0]==1 or arr[n-1][m-1]==1){
            return -1;
        }
        // int ans=0;
        while(pq.empty()==false){
            int k=pq.size();
            while(k--){
                int i=pq.front().first;
                int j=pq.front().second;
                pq.pop();
                if(i==n-1 and j==m-1){
                    if(arr[i][j]==1){
                        return -1;
                    }
                    return ans+1;
                }
                for(int k=0;k<8;k++){
                    int x=i+dx[k];
                    int y=j+dy[k];
                    if(x<0 or x>=n or y>=m or y<0  or arr[x][y]){
                        continue;
                    }else{
                        if(vis[x][y]==false){
                            pq.push({x,y});
                            vis[x][y]=true;
                        }
                    }
                }
            }
            ans++;
        }
        return -1;
    }
};
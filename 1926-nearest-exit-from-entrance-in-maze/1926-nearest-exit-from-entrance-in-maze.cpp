class Solution {
public:
    int nearestExit(vector<vector<char>>& arr, vector<int>& en) {
        int n=arr.size();
        int m=arr[0].size();
        queue<pair<int,int>>pq;
        pq.push({en[0],en[1]});
        int ans=0;
        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,1,-1};
        while(!pq.empty()){
            int k=pq.size();
            while(k--){
                int x=pq.front().first;
                int y=pq.front().second;
                pq.pop();
                if(x!=en[0] or y!=en[1]){
                    if(x==0 or x==n-1 or y==0 or y==m-1){
                        return ans;
                    }
                }
                for(int k=0;k<4;k++){
                    int i=x+dx[k];
                    int j=y+dy[k];
                    if(i>=0 and i<n and j>=0 and j<m and arr[i][j]!='+'){
                        arr[i][j]='+';
                        pq.push({i,j});
                    }
                }
            }
            ans++;
        }
        return -1;
    }
};
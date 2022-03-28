class Solution {
public:
    int maxDistance(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        queue<pair<int,int>>q,q1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==1){
                q.push({i-1,j});
                q.push({i+1,j});
                q.push({i,j+1});
                q.push({i,j-1});
                }
            }
        }
        int s=0;
        while(!q.empty()){
            int k=q.size();
            s++;
            while(k--){
                int i=q.front().first;
                int j=q.front().second;
                q.pop();
                if(i>=0 and i<n and j>=0 and j<m and arr[i][j]==0){
                    arr[i][j]=s;
                    q.push({i-1,j});
                    q.push({i+1,j});
                    q.push({i,j+1});
                    q.push({i,j-1});
                }
            }
        }
        if(s==1){
            return -1;
        }
        return s-1;
    }
};
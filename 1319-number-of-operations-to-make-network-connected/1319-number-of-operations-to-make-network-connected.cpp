class Solution {
public:
    void fun(vector<int>adj[],vector<bool>&vis,int i){
        vis[i]=true;
        for(auto x:adj[i]){
            if(vis[x]==false){
                fun(adj,vis,x);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& arr) {
        int c=arr.size();
        if(c<n-1){
            return -1;
        }
        vector<int>adj[n];
        for(auto x:arr){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        int ans=0;
        vector<bool>vis(n,false);
        for(int i=0;i<n;i++){
            if(vis[i]==false){
                ans++;
                fun(adj,vis,i);
            }
        }
        return ans-1;
    }
};
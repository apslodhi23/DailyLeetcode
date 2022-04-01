class Solution {
public:
    bool fun(vector<int>adj[],vector<bool>&vis,int i,int p){
        if(vis[i]==true){
            return true;
        }
        vis[i]=true;
        for(auto x:adj[i]){
            if(x!=p){
                if(fun(adj,vis,x,i)){
                    return true;
                }
            }
        }
        return false;
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        vector<int>adj[n+1];
        for(auto x:edges){
            vector<bool>vis(n+1,false);
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
            if(fun(adj,vis,x[0],-1)){
                return x;
            }
        }
        return {};
    }
};
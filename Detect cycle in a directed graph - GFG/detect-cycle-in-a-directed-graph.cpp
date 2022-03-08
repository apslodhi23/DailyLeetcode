// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool fun(vector<int>adj[],int i,vector<bool>&vis,vector<bool>&fvis){
        vis[i]=true;
        fvis[i]=true;
        for(auto x:adj[i]){
            if(vis[x]==false){
                if(fun(adj,x,vis,fvis)){
                    return true;
                }
            }else{
                if(fvis[x]==true){
                    return true;
                }
            }
        }
        fvis[i]=false;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<bool>vis(V,false);
        vector<bool>fvis(V,false);
        for(int i=0;i<V;i++){
            if(vis[i]==false){
                if(fun(adj,i,vis,fvis)==true){
                    return true;
                }
            }
        }
        return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends
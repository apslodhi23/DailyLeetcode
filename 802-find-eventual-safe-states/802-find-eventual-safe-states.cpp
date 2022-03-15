class Solution {
public:
    // void fun(vector<vector<int>>adj,int i,vector<bool>&vis,vector<int>&ans){
    //     vis[i]=true;
    //     ans.push_back(i);
    //     for(auto x:adj[i]){
    //         if(vis[x]==false){
    //             fun(adj,x,vis,ans);
    //         }
    //     }
    // }
    bool fun(vector<vector<int>>&adj,int i,vector<bool>&vis,vector<bool>&dvis){
        vis[i]=true;
        dvis[i]=true;
        for(auto x:adj[i]){
            if(vis[x]==false){
                if(fun(adj,x,vis,dvis)==true){
                    return true;
                }
            }else{
                if(dvis[x]==true){
                    return true;
                }
            }
        }
        dvis[i]=false;
        return false;
        
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>ans;
        map<int,int>m;
        for(int i=0;i<graph.size();i++){
            m[i]++;
            for(auto x:graph[i]){
                m[i]++;
            }
        }
        
        int n=graph.size();
       
        
        for(int i=0;i<n;i++){
            vector<bool>vis(n,false),dvis(n,false);
            if( vis[i]==false and fun(graph,i,vis,dvis)==false){
                ans.push_back(i);
            }
        }
        return ans;
        
    }
};
class Solution {
public:
    void fun(vector<vector<int>>&adj,vector<vector<int>>&ans,vector<int>v,int i){      v.push_back(i);
        if(i==adj.size()-1){
            ans.push_back(v);
        }else{
            for(auto x:adj[i]){
                fun(adj,ans,v,x);    
            }
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;
        vector<int>v;
        fun(graph,ans,v,0);
        return ans;
    }
};
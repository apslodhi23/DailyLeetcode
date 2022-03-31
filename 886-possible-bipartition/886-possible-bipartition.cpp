class Solution {
public:
    bool fun(vector<int>adj[],int i,vector<int>&ans){
        for(auto x:adj[i]){
            if(ans[x]==-1){
                ans[x]=!ans[i];
                if(fun(adj,x,ans)==false){
                    return false;
                }
            }else if(ans[i]==ans[x]){
                return false;
            }
        }
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& arr) {
        vector<int>adj[n];
        for(auto x:arr){
            adj[x[0]-1].push_back(x[1]-1);
            adj[x[1]-1].push_back(x[0]-1);
        }
        vector<int>ans(n,-1);
        for(int i=0;i<n;i++){
            if(ans[i]==-1){
                if(fun(adj,i,ans)==false){
                    return false;
                }
            }
        }
        return true;
    }
};
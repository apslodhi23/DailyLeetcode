class Solution {
public:
    // int ans=0;
    int fun(vector<int>adj[],int r,vector<int>&time){
        int ans=time[r];
        int res=0;
        for(auto x:adj[r]){
            res=max(res,fun(adj,x,time));
        }
        return ans+res;
    }
     int numOfMinutes(int n, int headID, vector<int>& arr, vector<int>& tim) {
        vector<int>adj[n];
        for(int i=0;i<n;i++){
            if(arr[i]!=-1)
            adj[arr[i]].push_back(i);
        }
        return fun(adj,headID,tim);
    }
};
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& arr, int n, int k) {
        vector<vector<int>>adj[n];
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>ans(n,INT_MAX);
        for(auto x:arr){
            int u=x[0]-1;
            int v=x[1]-1;
            int w=x[2];
            adj[u].push_back({v,w});
        }
        pq.push({0,k-1});
        ans[k-1]=0;
        while(pq.empty()==false){
            auto x=pq.top();
            pq.pop();
            int y=x.second;
            for(auto x:adj[y]){
                int v=x[0],w=x[1];
                if(ans[y]+w<ans[v]){
                    pq.push({ans[y]+w,v});
                    ans[v]=ans[y]+w;
                }
            }
        }
        int an=0;
        for(auto x:ans){
            if(x==INT_MAX){
                return -1;
            }
            an=max(an,x);
        }
        return an;
    }
};


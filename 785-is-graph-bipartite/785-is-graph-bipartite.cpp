class Solution {
public:
    bool isBipartite(vector<vector<int>>& arr) {
        int n=arr.size();
        vector<int>ans(n,-1);
        for(int i=0;i<n;i++){
            if(ans[i]==-1){
                queue<int>q;
                ans[i]=0;
                q.push(i);
                while(!q.empty()){
                    int t=q.front();
                    q.pop();
                    for(auto x:arr[t]){
                        if(ans[x]==-1){
                            ans[x]=!ans[t];
                            q.push(x);
                        }else if(ans[x]==ans[t]){
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};
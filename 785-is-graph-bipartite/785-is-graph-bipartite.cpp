class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int>color(graph.size(),-1);
        for(int i=0;i<graph.size();i++){
            if(color[i]==-1){
                color[i]=0;
                queue<int>q;
                q.push(i);
                while(!q.empty()){
                    int x=q.front();
                    q.pop();
                    for(auto j:graph[x]){
                        if(color[j]==-1){
                            color[j]=!color[x];
                            q.push(j);
                        }
                        else 
                        {
                            if(color[j]==color[x]){
                                return false;
                            }
                        }
                    }
                }
            }
        }
        return true;
    }
};
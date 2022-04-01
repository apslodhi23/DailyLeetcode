class Solution {
public:
    int find(int i,vector<int>&root){
        if(root[i]==-1){
            return i;
        }
        return root[i]=find(root[i],root);
    }
    void merge(int i,int j,vector<int>&rank,vector<int>&root){
        int px=find(i,root);
        int py=find(j,root);
        if(px==py){
            return;
        }
        if(px>py){
            root[py]=px;
            rank[px]+=rank[py];
        }else{
            root[px]=py;
            rank[py]+=rank[px];
        }
    }
    int findCircleNum(vector<vector<int>>& arr) {
        int n=arr.size();
        vector<int>root(n,-1);
        vector<int>rank(n,1);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]==1){
                    merge(i,j,rank,root);
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(root[i]==-1){
                ans++;
            }
        }
        return ans;
    }
};
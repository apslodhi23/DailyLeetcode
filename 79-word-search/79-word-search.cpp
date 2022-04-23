class Solution {
public:
     bool vis[1002][1002];
    bool flag=false;
    bool fun(int i,int j,vector<vector<char>>&arr,string s,int n,int m,int idx){
        vis[i][j]=1;
        if(idx==s.length()-1 and arr[i][j]==s[idx]){
            flag=true;
            return true;
        }
        idx++;
        if(i+1<n and j<m and i+1>=0 and j>=0 and vis[i+1][j]!=1 and s[idx]==arr[i+1][j]){
           flag=flag or  fun(i+1,j,arr,s,n,m,idx);
        }
         if(i<n and j-1<m and i>=0 and j-1>=0 and vis[i][j-1]!=1 and s[idx]==arr[i][j-1]){
             flag=flag or fun(i,j-1,arr,s,n,m,idx);
        }
         if(i<n and j+1<m and i>=0 and j+1>=0 and vis[i][j+1]!=1 and s[idx]==arr[i][j+1]){
            flag=flag or fun(i,j+1,arr,s,n,m,idx);
        }
         if(i-1<n and j<m and i-1>=0 and j>=0 and vis[i-1][j]!=1 and s[idx]==arr[i-1][j]){
             flag=flag or fun(i-1,j,arr,s,n,m,idx);
        }
        vis[i][j]=0;
        return flag;
    }
    bool exist(vector<vector<char>>& arr, string s) {
       int n=arr.size();
        int m=arr[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                flag=false;
                if(arr[i][j]==s[0]){
                    memset(vis,0,sizeof(vis));
                    vis[i][j]=1;
                    flag=fun(i,j,arr,s,n,m,0);
                }
                if(flag==true){
                    return flag;
                }
            }
            
        }
        return flag;
    }
};
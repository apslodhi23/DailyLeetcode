class Solution {
public:
    int countSquares(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        vector<vector<int>>v(n,vector<int>(m));
        for(int i=0;i<m;i++){
            v[0][i]=arr[0][i];
        }
        for(int i=0;i<n;i++){
            v[i][0]=arr[i][0];
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                int c=min(v[i-1][j],v[i][j-1]);
                c=min(c,v[i-1][j-1]);
                if(arr[i][j]==0){
                    v[i][j]=0;
                }else{
                    v[i][j]=1+c;
                }
            }
        }
        int ans=0;
        for(auto x:v){
            for(auto y:x){
                ans+=y;
            }
        }
        return ans;
    }
};
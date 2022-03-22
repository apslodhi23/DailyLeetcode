class Solution {
public:
    vector<vector<int>> reconstructMatrix(int u, int l, vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>>ans(2,vector<int>(n,0));
        for(int i=0;i<n;i++){
            if(arr[i]==2){
                if(l==0 or u==0){
                    return {};
                }
                ans[0][i]=1;
                ans[1][i]=1;
                u--;
                l--;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                if(u==0 and l==0){
                    return {};
                }else if(u!=0){
                    ans[0][i]=1;
                    u--;
                }else{
                    ans[1][i]=1;
                    l--;
                }
            }
        }
        if(l!=0 or u!=0){
            return {};
        }
        return ans;
    }
};
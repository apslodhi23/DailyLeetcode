class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n));
        int k=1;
        int u=0,d=n-1,l=0,r=n-1;
        int c=0;
        while(k<=n*n){
            if(c==0){
                for(int i=l;i<=r;i++){
                    ans[u][i]=k;
                    k++;
                }
                u++;
                c=1;
            }else if(c==1){
                for(int i=u;i<=d;i++){
                    ans[i][r]=k;
                    k++;
                }
                r--;
                c=2;
                
            }else if(c==2){
                for(int i=r;i>=l;i--){
                    ans[d][i]=k;
                    k++;
                }
                d--;
                c=3;
            }else if(c==3){
                for(int i=d;i>=u;i--){
                    ans[i][l]=k;
                    k++;
                }
                c=0;
                l++;
            }
        }
        return ans;
    }
};
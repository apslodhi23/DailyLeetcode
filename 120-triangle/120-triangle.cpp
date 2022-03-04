class Solution {
public:
    int minimumTotal(vector<vector<int>>& arr) {
        int n=arr.size();
        int ans=INT_MAX;
        if(n==1){
            return arr[0][0];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<arr[i].size();j++){
                if(j==0){
                    arr[i][j]+=arr[i-1][j];
                }else if(j==arr[i].size()-1){
                    arr[i][j]+=arr[i-1][j-1];
                }else{
                    arr[i][j]+=min(arr[i-1][j],arr[i-1][j-1]);
                }
                if(i==n-1){
                    ans=min(ans,arr[i][j]);
                }
            }
        }
        return ans;
    }
};
class NumMatrix {
public:
    vector<vector<int>>nums;
    NumMatrix(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        vector<vector<int>>sum(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+arr[i-1][j-1];
            }
        }
        nums=sum;
    }
    
    int sumRegion(int r1, int c1, int r2, int c2) {
        r1++,c1++,r2++,c2++;
        // swap(r1,r2);
        // swap(c1,c2);
        return (nums[r2][c2]-nums[r2][c1-1]-nums[r1-1][c2]+nums[r1-1][c1-1]);
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
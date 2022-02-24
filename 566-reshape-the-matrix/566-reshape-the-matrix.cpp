class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size();
        int m=mat[0].size();
        if(n*m!=r*c){
            return mat;
        }
        vector<int>v;
        for(auto x:mat){
            for(auto y:x){
                v.push_back(y);
            }
        }
        int i=0;
        vector<vector<int>>ans(r,vector<int>(c));
        for(int j=0;j<r;j++){
            for(int k=0;k<c;k++){
                ans[j][k]=v[i];
                i++;
            }
        }
        return ans;
    }
};
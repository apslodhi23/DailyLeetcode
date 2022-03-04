class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>>v(query_row+2,vector<double>(query_glass+2));
        v[0][0]=poured;
        for(int i=0;i<=query_row;i++){
            for(int j=0;j<=query_glass;j++){
                double tt=(v[i][j]-1.0)/2;
                if(tt>0){
                    v[i+1][j]+=tt;
                    v[i+1][j+1]+=tt;
                }
            }
        }
        return min(v[query_row][query_glass],1.0);
    }
};
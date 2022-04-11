class Solution {
public:
    // void fun(vector<vector<int>>&arr){
    //     int n=arr.size();
    //     int m=arr[0].size();
    //     vector<int>
    // }
    vector<vector<int>> shiftGrid(vector<vector<int>>& arr, int k) {
        int n=arr.size();
        int m=arr[0].size();
        int c=n*m;
        k=k%c;
        vector<int>v;
        for(auto x:arr){
            for(auto y:x){
                v.push_back(y);
            }
        }
        int x=c-k;
        // x--;
        int y=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(x<c){
                    arr[i][j]=v[x];
                    x++;
                }else{
                    arr[i][j]=v[y];
                    y++;
                }
            }
        }
        return arr;
    }
};
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int t) {
      int i=0;
        int j=arr[0].size()-1;
        int n=arr.size();
        while(i<n and j>=0){
            if(arr[i][j]==t){
                return true;
            }
            else if(arr[i][j]<t){
                i++;
            }else{
                j--;
            }
        }
        return false;
    }
};
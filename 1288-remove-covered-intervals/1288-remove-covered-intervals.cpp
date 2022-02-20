class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end());
        int ans=1;
        int v1=arr[0][0];
        int v2=arr[0][1];
        for(int i=1;i<arr.size();i++){
            
            if(arr[i][0]>=v1 and arr[i][1]<=v2){
                continue;
            }
            if(arr[i][0]<=v1 and arr[i][1]>=v2){
                v1=arr[i][0];
                v2=arr[i][1];
                continue;
            }
            else{
                ans++;
                v1=arr[i][0];
                v2=arr[i][1];
            }
        }
        return ans;
    }
};
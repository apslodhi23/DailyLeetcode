class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        int v1=arr[0][0];
        int v2=arr[0][1];
        for(int i=1;i<arr.size();i++){
            if(arr[i][0]<=v2){
                v2=max(v2,arr[i][1]);
            }else{
                ans.push_back({v1,v2});
                v1=arr[i][0];
                v2=arr[i][1];
            }
        }
        ans.push_back({v1,v2});
        return ans;
    }
};
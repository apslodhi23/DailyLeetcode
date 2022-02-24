class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& arr, vector<int>& c) {
        arr.push_back(c);
        sort(arr.begin(),arr.end());
        int v0=arr[0][0];
        int v1=arr[0][1];
        vector<vector<int>>ans;
        for(int i=1;i<arr.size();i++){
            if(v1>=arr[i][0]){
                v1=max(v1,arr[i][1]);
            }else{
                ans.push_back({v0,v1});
                v0=arr[i][0];
                v1=arr[i][1];
            }
        }
        ans.push_back({v0,v1});
        return ans;
    }
};
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
        // return ans;
        // vector<vector<int>>ans;
        // if(arr.size()==0){
        //     ans.push_back(c);
        //     return ans;
        // }
        // int i =0;
        // for(;i<arr.size();i++){
        //     if(arr[i][1]>=c[0]){
        //         break;
        //     }else{
        //         ans.push_back(arr[i]);
        //     }
        // }
        // if(i==0 and arr[0][]>c[0]){
        //     ans.push_back(c);
        //     for(auto x:arr){
        //         ans.push_back(x);
        //     }
        //     return ans;
        // }
        // if(i==arr.size()){
        //     ans.push_back(c);
        //     return ans;
        // }
        // int v0=min(arr[i][0],c[0]);
        // int v1=max(arr[i][1],c[1]);
        // i++;
        // for(;i<arr.size();i++){
        //     if(arr[i][0]<=v1){
        //         v1=max(v1,arr[i][1]);
        //     }else{
        //         break;
        //     }
        // }
        // ans.push_back({v0,v1});
        // for(;i<arr.size();i++){
        //     ans.push_back(arr[i]);
        // }
        return ans;
    }
};
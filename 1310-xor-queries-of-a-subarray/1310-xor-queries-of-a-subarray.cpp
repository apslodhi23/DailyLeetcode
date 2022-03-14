class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& q) {
        int m=q.size();
        vector<int>ans;
        int n=arr.size();
        vector<int>pref(n);
        pref[0]=arr[0];
        for(int i=1;i<n;i++){
            pref[i]=arr[i]^pref[i-1];
        }
        // for(auto x:pref){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        for(int i=0;i<m;i++){
            // cout<<q[i][0]<<" "<<q[i][1]<<endl;
            int x=q[i][0];
            int y=q[i][1];
            if(x==0){
                ans.push_back(pref[y]);
            }
            else{
                ans.push_back(pref[y]^pref[x-1]);
            }
        }
        return ans;
        
    }
};
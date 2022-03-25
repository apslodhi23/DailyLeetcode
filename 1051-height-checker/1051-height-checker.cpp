class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>v;
        int i=0;
        for(auto x:heights){
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int ans=0;
        int c=0;
       for(int i=0;i<v.size();i++){
           if(v[i]!=heights[i]){
               ans++;
           }
       }
        return ans;
    }
};
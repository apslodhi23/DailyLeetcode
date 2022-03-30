class Solution {
public:
    int findJudge(int n, vector<vector<int>>& arr) {
        map<int,int>m;
        map<int,int>mx;
        for(auto x:arr){
            m[x[0]]++;
            mx[x[1]]++;
        }
        for(int i=1;i<=n;i++){
            if(m.find(i)==m.end() and mx[i]==n-1){
                return i;
            }
        }
        return -1;
    }
};
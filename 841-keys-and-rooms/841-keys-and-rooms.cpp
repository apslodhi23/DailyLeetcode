class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& arr) {
        map<int,int>m;
        m[0]++;
        int n=arr.size();
        queue<int>q;
        q.push(0);
        while(!q.empty()){
            int t=q.front();
            q.pop();
            // m[t]++;
            for(auto x:arr[t]){
                if(m.find(x)==m.end()){
                    m[x]++;
                    q.push(x);
                }
            }
        }
        return (int)m.size()==n;
    }
};
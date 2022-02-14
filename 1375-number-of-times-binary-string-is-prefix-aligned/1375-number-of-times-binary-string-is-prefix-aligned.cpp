class Solution {
public:
    int numTimesAllBlue(vector<int>& flips) {
        // vector<pair<int,int>>v;
        // for(int i=0;i<flips.size();i++){
        //     v.push_back({flips[i],i});
        // }
        // sort(v.begin(),v.end());
        priority_queue<int,vector<int>,greater<int>>pq;
        priority_queue<int>pqq;
        for(int i=0;i<flips.size();i++){
            pq.push(i);
        }
        int n=flips.size();
        int ans=0;
        vector<bool>vis(n,false);
        for(int i=0;i<n;i++){
            pqq.push(flips[i]-1);
            vis[flips[i]-1]=true;
            while(pq.empty()==false and vis[pq.top()]==true){
                pq.pop();
            }
            if(pq.empty()==false and pqq.top()<pq.top()){
                ans++;
            }
            else if(pq.empty()==false and pqq.top()>pq.top()){
                continue;
            }else if(pq.empty()==true or pq.top()>flips[i]-1){
                ans++;
            }
        }
        // return ans;
        return ans;
    }
};
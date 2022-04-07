class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(auto x:stones){
            pq.push(x);
        }
        while(pq.empty()==false){
            if(pq.size()==1){
                return pq.top();
            }
            int t=pq.top(); pq.pop();
            int tt=pq.top(); pq.pop();
            int c=abs(tt-t);
            if(c!=0){
                pq.push(c);
            }
        }
        return 0;
    }
};
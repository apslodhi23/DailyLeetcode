class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int>pq;
        // int minn=*min_element(nums.begin(),nums.end());
        int minn=INT_MAX;
        for(auto x:nums){
           int t=x%2?x*2:x;
            pq.push(t);
            minn=min(minn,t);
        }
        int ans=INT_MAX;
        while(pq.top()%2!=1){
            ans=min(ans,pq.top()-minn);
            minn=min(minn,pq.top()/2);
            
            int t=pq.top()/2;
            pq.pop();
            pq.push(t);
        }
        return min(ans,pq.top()-minn);
    }
};
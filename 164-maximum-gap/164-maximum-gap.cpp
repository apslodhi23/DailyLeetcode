class Solution {
public:
    int maximumGap(vector<int>& nums) {
        priority_queue<int>pq;
        if(nums.size()<2){
            return 0;
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        while(pq.size()>=2){
            int t=pq.top();
            pq.pop();
            ans=max(ans,t-pq.top());
        }
        return ans;
    }
};
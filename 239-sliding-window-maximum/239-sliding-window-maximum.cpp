class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        map<int,int>m;
        vector<int>ans;
        // priority_queue<int>pq;
        int i=0;
        while(i<k){
            m[nums[i]]++;
            i++;
        }
        ans.push_back(m.rbegin()->first);
        int j=0;
        while(i<nums.size()){
            m[nums[j]]--;
            if(m[nums[j]]==0){
                m.erase(nums[j]);
            }
            m[nums[i]]++;
            ans.push_back(m.rbegin()->first);
            i++;
            j++;
        }
        return ans;
    }
};
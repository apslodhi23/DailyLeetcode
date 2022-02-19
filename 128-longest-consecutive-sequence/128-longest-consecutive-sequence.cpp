class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int>m;
        for(auto x:nums){
            m[x]++;
        }
        int n=nums.size();
        int i=0;
        while(i<n){
            if(m.find(nums[i]-1)!=m.end()){
                i++;
            }else{
                int k=nums[i];
                int c=0;
                while(m.find(k)!=m.end()){
                    k++;
                    c++;
                }
                ans=max(ans,c);
                i++;
            }
        }
        return ans;
    }
};
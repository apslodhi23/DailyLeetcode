class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]==key){
                m[nums[i+1]]++;
            }
        }
        int maxx=0,ans;
        
        for(auto x:m){
            if(x.second>maxx){
                maxx=x.second;
                ans=x.first;
            }
        }
        return ans;
    }
};
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int ans=0;
        map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<k){
                int ck=k-nums[i];
                if(m.find(ck)!=m.end()){
                    ans++;
                    m[ck]--;
                    if(m[ck]==0){
                        m.erase(ck);
                    }
                }else{
                    m[nums[i]]++;
                }
            }
        }
        return ans;
    }
};
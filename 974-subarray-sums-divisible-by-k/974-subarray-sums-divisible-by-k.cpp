class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum=0,ans=0;
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int r=(sum%k +k)%k;
            if(r==0){
                ans++;
            }
            if(m.find(r)!=m.end()){
                ans+=m[r];
            }
            m[r]++;
        }
        return ans;
    }
};
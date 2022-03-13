class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        long long sum=(long long )k*(k+1)/2;
        set<long long>s(nums.begin(),nums.end());
        for(auto x:s){
            if(x<=k)
            sum+=(++k)-x;
        }
        return sum;
    }
};